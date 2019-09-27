#include <iostream>
#include <cstdio>
using namespace std;
/**
 * @brief Example of data types in C/C++.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[]) {
    int n1;                 //<! Enteros
    long int n2;            //<! Entero largo
    char n3;                //<! caracter
    float n4;               //<! flotante
    double n5;              //<! flotante con más precisión
    unsigned int n6;        //<! Entero sin signo
    unsigned long int n7;   //<! Enero largo sin signo
    long double n8;         //<! 
    bool n9;                //<! 
    char *n10;              //<! 
    scanf("%d %ld %c %f %lf",&n1,&n2,&n3,&n4,&n5);
    printf("%d\n",n1);
    printf("%ld\n",n2);
    printf("%c\n",n3);
    printf("%f\n",n4);
    printf("%lf\n",n5);
    return 0;
}