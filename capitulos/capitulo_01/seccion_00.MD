# Compilación

C/C++ son dos lenguajes compilados. Esto es que para que un programa corra es necesario procesar el texto dentro del programa/código (usualmente dentro de un archivo fuente de texto) con un compilador, el cual produce una serie de archivos objetos, los cuales son combinados por un linker en un programa ejecutable. Un programa en C++ usualmente consiste de muchos archivos fuentes de código.

[!image]

Al final un ejecutable termina siendo creado para una específica combinación de hardware/software, por lo tanto, un ejecutable no es portable.

Una de las grandes diferencia entre C y C++ es el tamaño que ocupa un ejecutable hecho con librerias de C++ vs uno con librerias de C.

consideremos por ejemplo el típico "Hola Mundo"



|Bytes|Program|
|---:|---|
| 6,557,987 | example_00.exe |
|   268,834 | example_00_with_C.exe |

Es decir el ejecutable de un "Hola Mundo" generado usando la librería "iostream" pesa aproximadamente 24 veces más que el generado usando la librería "stdio.h".
