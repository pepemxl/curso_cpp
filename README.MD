# C++
## Objetivo de estás notas
Estas notas son el resultado
de un repaso general de C++ con el objetivo de que mis alumnos sean capaces de  aprender/recobrar buenas practicas de desarrollo con las nuevas herramientas que introduce C++11.

## Temas
Los temas a revisar en estás notas serán dividos acorde al libro de C++11 de Bjarne Stroustrup son:
- Introducción
- Facilities Básicas
    - Tipos y declaraciones.
    - Punteros, arreglos y referencias.
    - Structures, unions y enumerations.
    - Sentencias.
    - Expresiones.
    - Operadores de selección.
    - Funciones.
    - Manejo de excepciones.
    - Espacio de nombres(namespace).
    - Archivos fuente y programas.
- Abstracciones y Mecanismos
    - Clases.
    - Construcción, limpieza, copia y movimiento.
    - Sobrecarga(overloading).
    - Operadores especiales.
    - Clases derivadas.
    - Jerarquia de clases.
    - Tipo de información en tiempo de ejecución(run-time).
    - Plantillas(templates).
  - Programación generica
  - Especialización
  - Instanciación
  - Plantillas y jerarquia.
  - Metaprogramación.
  - Diseño matricial.
- La librería estandar STL
    - STL la librería estandar.
    - Contenedores STL.
    - Algoritmos STL.
    - Iteradores STL.
    - Memoria y recursos.
    - Utilidades
    - Cadenas de carácteres(Strings)
    - Expresiones regulares
    - I/O streams.
    - Locales
    - Numericos
    - Concurrencia
    - Hilos(threads) y tareas(tasks)
    - La librería estandar C
    - Compatibilidad 

## Introducción a C++

Algunos de los tipos de datos, sus especificadores de formato y sus más comunes tamaños en bits son los siguientes:

-    Int `("%d")`: 32 Bit integer
-    Long `("%ld")`: 64 bit integer
-    Char `("%c")`: Character type
-    Float `("%f")`: 32 bit real value
-    Double `("%lf")`: 64 bit real value

### Lectura(lectura desde pantalla)

Para leer un tipo de dato se usa la siguiente sintaxis:

    scanf("format_specifier", &val)

### Escritura(impresión a pantalla)

Para imprimir un tipo de dato usamos la siguiente sintaxis:

    printf("format_specifier", val)

Nota: Podemos usar **cin** y **cout**, sin embargo **scanf** y **printf** son más rapidos cuando se tienen que realizar operaciones de lectura y escritura millones de veces. 



