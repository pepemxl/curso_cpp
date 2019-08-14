# Las clases en C++
Las clases en C++ son tipos definidos por el usuario y declarados con la palabra reservada `class`, estás clases contienen datos(miembros) y funciones llamadas métodos.
Aunque las clases y las estructuras de datos tienen el mismo tipo de funcionalidad, hay algunas diferencias básicas. Los miembros de una clase son privados por defecto mientras que en una estructura son publicos por defecto.
 Tambien hay específicadores de acceso para cada uno de los miembros de la clase. Entre los principales se encuentran los siguientes:

    public: Miembros publicos (variables, metodos) pueden ser accesados desde cualquier parte del código.
    private: Miembros privados unicamente pueden ser accesados por otras fucniones miembros de la clase.
    protected:
    signals:

Una típica clase puede ser representada por:

    class ClassName {
        access_specifier1:
            type1 val1;
            type2 val2;
            ret_type1 method1(type_arg1 arg1, type_arg2 arg2,...)
            ...
        access_specifier2:
            type3 val3;
            type4 val4;
            ret_type2 method2(type_arg3 arg3, type_arg4 arg4,...)
            ...
    };

donde ClassName es el nombre/identificador de la clase, la convención que se usará es upper camel case(pascal case).
Lo más comun es hacer privadas todas las variables y crear metodos de acceso y asignación get/set. Por ejemplo,

    class SampleClass {
        private:
            int val;
        public:
            void set(int a) {
                val = a;
            }
            int get() {
                return val;
            }
    };

## La biblioteca < sstream >

La librería sstream provee un stream(flujo de datos), de y hacia una cadena de carácteres(string):
- istringstream para lectura de un string.
- ostringstream para la escritura de un string.
- stringstream para la lectura y escritura de strings. 

El template de stringstream es:
    
    template<typename C, typename Tr = char_traits<C>, typename A = allocator<C>>
    class basic_stringstream : public basic_iostream<C,Tr>{
        public: 
            using char_type = C;
            using int_type = typename Tr::int_type;
            using pos_type = 
    }

Los operadores en sstream son:

- stringstream ss{m}; ss es un string stream vacio con moda m.
- stringstream ss{}; Constructor por defecto.
- stringstream ss{s,m}; Sting inicializado con string s y moda m. 
- stringstream ss{s}; stringstream ss {s,ios_base::out|ios_base::in};
- stringstream ss{ss2}; Constructor Move: ss2 es movido a ss; ss2 queda vacio. 
- ss=move(ss2); Asignación Move: ss2 es movido a ss; ss2 queda vacio.
- p=s.rdbuf(); p apunta a s
- s=ss.str(); 
- ss.str(s); 
- ss.swap(ss2); 
