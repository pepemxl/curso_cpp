# String
C++ nos provee con un nuevo tipo para manipular cadenas de caracteres, dicho
tipo es llamado `string`.

Ejemplo de declaración:

`string a = "abc";`

Tamaño del string:

`int len = a.size();`

Concatenar dos strings:

``` 
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
```

Accesar el i-esimo elemnto del string:

```
string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
```


