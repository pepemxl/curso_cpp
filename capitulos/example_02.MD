# Estructuras de control 
## Estructura condicional IF

if: Ejecuta el cuerpo o conjunto de lineas de  código que se encuentran entre las llaves cuando la condición entre parentesis sea cierta.

``` 
if (condition) {
    statement1;
    ...
}
```

`if - else`: Ejecuta las sentencias de código que se encuentran entre llaves justo después del `if` (statement1) cuando la condición entre parentesis es cierta y ejecuta las sentencias de código que se encuentran entre las llaves justo después del `else` (statement2) cuando la condición es falsa.
```
if (condition) {
    statement1;
    ...
}
else 
{
    statement2;
    ...
}
```

`if - else if - else`: En esta estructura de control para cada evaluación de la condición if se evalua si y sólo si, todas las condiciones previas fueron falsas.
En cuanto una de las condiciones resulta verdadera, las sentencias entre llaves después de esas condición son evaluadas y se pasa al final de la estructura de control.

```
if(first condition) {
    statement1
    ...
}
else if(second condition) {
    statement2
    ...
}
.
.
.
else if(n'th condition) {
    statememtn
    ...
}
else 
{
    ...
}
```