@ECHO OFF
setlocal
REM set "emptyString="
REM call :strlen result emptyString
REM echo %result%
REM *** This string has the length 14
REM set "myString=abcdef!%%^^()^!"
REM call :strlen result myString
REM echo %result%
REM *** This string has the maximum length of 8191
REM setlocal EnableDelayedExpansion
REM set "long=."
REM FOR /L %%n in (1 1 13) DO set "long=!long:~-4000!!long:~-4000!"
REM (set^ longString=!long!!long:~-191!)

REM call :strlen result longString
REM echo %result%
REM all:
REM if %1 in () then
REM do 
IF NOT "%1"=="" (
	REM call :strlen result %1
	REM set sub1=%1:~0,-4%
	REM echo %1:~nI%
	REM echo %~n1
	REM echo %sub1%
	echo g++ %~n1.cpp -o current.exe --std=c++11
	REM echo current.exe < %~n1_01.in
	echo current.exe < %~n1_01.in
) ELSE (
	g++ attribute_parser.cpp -o current.exe --std=c++11
	current.exe < attribute_parser_test_01.in
)
	
REM endif
REM test:
goto :eof
REM ********* function *****************************
:strlen <resultVar> <stringVar>
(   
    setlocal EnableDelayedExpansion
    (set^ tmp=!%~2!)
    if defined tmp (
        set "len=1"
        for %%P in (4096 2048 1024 512 256 128 64 32 16 8 4 2 1) do (
            if "!tmp:~%%P,1!" NEQ "" ( 
                set /a "len+=%%P"
                set "tmp=!tmp:~%%P!"
            )
        )
    ) ELSE (
        set len=0
    )
)
( 
    endlocal
    set "%~1=%len%"
    exit /b
)