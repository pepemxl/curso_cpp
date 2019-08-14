# C++ 11
Estas notas son el resultado
de un repaso general de C++ con el objetivo de que mis alumnos sean capaces de  aprender/recobrar buenas practicas de desarrollo con C++11.
- C++ es un lenguaje de programación de proposito general con un sesgo hacia  programación de sistemas.
- C++ es un lenguaje de programación de proposito general que provee un modelo
de hardware directo y eficiente combinado con las facilidades de abstracciones ligeras.
- C++  es un lenguaje para desarrollar elegante y eficientemente abastracciones.

Las ideas generales para diseñar y programar segun B.Stroustrup son:
- Expresar ideas directamente en código.
- Expresar ideas independientes de manera independiente en el código.
- Representar relaciones entre ideas directamente en el código.
- Combinar ideas expresadas libremente en el código(donde esto tenga sentido).
- Expresar ideas simples de manera simple.


Las caracteristicas de C++ dan soporte  a cuatro estilos de programación:
- Programación Procedural
- Abstracción de datos
- Programación Orientada a Objetos
- Programación Generica

Simula?

Para el manejo de recursos lo ideal es que cada recurso debe cumplir los siguientes puntos:
- simple(para implementadores)
- general(un recurso es algo que puede ser llamado desde cualquier parte y posteriormente liberado)
- eficiente(obedece el principio de zero-overhead)
- perfecto(no leaks de memoria)
- estaticamente type-safe

Ejemplos de manejadores de recursos son:
- vector
- string 
- thread
- mutex
- unique_ptr
- fstream
- regex

En general uno puede implementar sus propias versiones de estos manejadores de recursos para aumentar el rendimiento, sin embargo no se aconseja tomar ese camino, a largo plazo esto es caro en mantenimiento de software.

Verificación de tipos(Type checking) es una de las herramientas más utiles para evitar errores de programación. Aunque no los empiden ayudan a la detección de errores. Es un analisis que sea realiza en tiempo de compilación. Recordar que en principio C++ es un sistema de tipos estaticos, lo cual ayuda  adisminuir el overhead.

En C++11 se introduce los constructuras move y la asignación move para tener un mejor control de las copias, lo cual le da a está versión de C++ herramientas para poder mover grandes objetos de un scope a otro, lo cual permite un mejor control del tiempo de vida objetos polimorficos o compartidos.


New facilities of C++11:
- Uso de constructores para establecer invariantes.
- Uso de constructor/destructor para simplificar el manejo de recursos.
- Evitar el uso desnudo de `new` y `delete`.
- Usar contenedores y algoritmos en lugar de construir arreglos y código ad hoc.
- Tendencia a usar librerías estandar en lugar de código desarrollado de manera local.
- Uso de excepciones, en lugar de códigos de error para reportar errores que no pueden ser manejados 
localmente.
- Uso de la semántica `move` para evitar copiar objetos grandes.
- Uso  de `unique_ptr` para referenciar objetos de tipo polimorfico.
- Uso de `shared_ptr` para referenciar objetos compartidos(`shared objects`), es decir, objetos sin un único propietario que sea responsable de su destrucción.
- Uso de plantillas(`templates`)  para mantener el static type safety, es decir, eliminar el cast, y evitar el uso inecesario  de jerarquia de clases.

## Sugerencias para programadores C que quieren programar C++

- No pensar en C++ como una extensión de C.
- No codificar al estilo C en C++.
- Uso de la librería estandar C++.
- Usar `const`, `constexpr`, `enum`, `enum class` para definir manifiestos constantes, `inline`  para evitar el overhead provocado por el llamado de funciones, `templates` para especificar la familia de funciones y tipos, y `namespaces` para evitar  conflictos de nombres.
- No declarar variables antes de usarlas, y en cuanto las declares las inicializas.
- No usar `malloc()`. El nuevo operador `new` realiza la misma tarea de mejor manera, y en lugar de usar `realloc()` usar `vector`. No remplazar `malloc()` y `free()` con `new` y `delete` desnudos.
- Evitar el uso de `void*`, `unions`, y `casts`.
Su uso perjudica al rendimiento. El uso de un cast indica un error de diseño. Si tienes que realizar un cast hazlo con una sentencia cast que indique cual es la intención del cast(ejemplo: `static_cast`).
- Minimiza el uso de arreglos y cadenas de carácteres al estilo C. No re-inventes la rueda, si ya existe en la librería estandar usala!
- Evitar aritmética de apuntadores, excepto en código muy especializado y para recorridos simples de arreglos(`++p`).
- Para obedecer las convenciones de linkage C, una función C++ debe ser declarada. 
- Recordar que el uso de funciones virtuales es para elecciones que se realizan en momento de ejecución.

## Características de C++11:
- Control de defectos: `=delete` , `=default`
- Deducción del tipos: `auto`
- Evaluación generalizada de expresiones constantes: `constexpr`
- Inicializadores dentro de clase.
- Herencia de constructores.
- Expresiones lambda: Una manera de definir implicitamente funciones objeto en el punto donde son usadas en la expresión.
- Semantica `move`, una manera de enviar información sin realizar copias.
- Una manera de establecer que una función no debe arrojar excepciones: `noexcept`.
- Un nombre propio para el apuntador nulo(null).
- El rango para la sentencia/operador `for`.
- Controles para `override`: `final` y `override`.
- Alias de tipos, un mecanismo para asignar un alias a un  tipo o template. En particular es una manera de definir un template haciendo un bind de argumentos de otro template.
- Enumeration con tipo(type) y alcance(scope): enum class.
- Universal y uniforme inicialización.
- Plantillas(templates) variadic, una manera de pasar un arbitrario número de  argumentos de  arbitrarios tipos a una plantilla(template).

## STL
- Hashed containers, `unordered_map`.
- Concurrency library componente: `thread`,`mutex`, `lock`.
- Lanzamiento de computo asincrono y resutados retornados: `future`, `promise` y `async()`
- La garbage collection interface( algo asu como la clase asbtracta recolectora de basura)
- Una librería de expresiones regulares, `regex`
- Una librería de números aleatorios.
- Un apuntador para el paso eficiente  de recursos, `unique_ptr`(originalmente `move_ptr` y lo que debio ser `auto_ptr`).
- Un apuntador para representar que hay varios propietarios, `shared_ptr`.
- La librería `tuple`.
- `bind()`
- El tipo `function`.

## Librerías
- ISO C++
- BOOST
- POCO
- QT
- wxWIdgets
- WebKit
- CGAL
- QuickFix
- OpenCV
- Root



Current page 52