# Compilación

C/C++ es son lenguajes compilados. Para que un programa corra es necesario procesar el texto dentro del programa(usualmente dentro de un archivo fuente de texto) con un compilador, el cual produce una serie de archivos objetos, los cuales son combinados por un linker en un programa ejecutable. Un programa en C++ usualmente consiste de muchos archivos fuentes de código.

[!image]

Al final un ejecutable termina siendo creado para una específica combinación de hardware/software, por lo tanto, un ejecutable no es portable.

Una de las grandes diferencia es el tamaño que ocupa un ejecutable hecho con librerias de C++ vs uno con librerias de C.

consideremos por ejemplo el típico "Hola Mundo"



---
| 6,557,987 | example_00.exe |

|   268,834 | example_00_with_C.exe |

Es decir el ejecutable de un "Hola Mundo" gerado usando la libreria "iostream" pesa 30 veces el generado usando la librería "stdio.h".
