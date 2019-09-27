# stringstream
stringstream es una clase stream para trabajar con strings.
Esta clase implementa operaciones input/output en memoria.
```
    Operator >> Extracts formatted data.
    Operator << Inserts formatted data.
    Method str() Gets the contents of underlying string device object.
    Method str(string) Sets the contents of underlying string device object.
```
El archivo .h es sstream.
Un uso común de esta clase es hacer un parse de enteros
separados por comas dentro de un string (e.g., "23,4,56").

stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56



```
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  int aux;
  vector<int> integers;
  stringstream ss(str);
  while(ss >> aux){
    integers.push_back(aux);
    ss.ignore();// ignore the next caracter
  }
  return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
```
