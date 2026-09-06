// Figura 8.17: fig08_17.cpp
// Demonstrando o operador sizeof.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    char c; // variável de tipo char
    short s; // variável de tipo short
    int i; // variável de tipo int
    long l; // variável de tipo long
    float f; // variável de tipo float
    double d; // variável de tipo double
    long double ld; // variável de tipo long double
    int array[20]; // array de int
    int *ptr{array}; // variável de tipo int *

    cout << "sizeof c = " << sizeof c
        << "\tsizeof(char) = " << sizeof(char)
        << "\nsizeof s = " << sizeof s
        << "\tsizeof(short) = " << sizeof(short)
        << "\nsizeof i = " << sizeof i
        << "\tsizeof(int)" << sizeof(int)
        << "\nsizeof l = " << sizeof l
        << "\tsizeof(long) = " << sizeof(long)
        << "\nsizeof f = " << sizeof f
        << "\tsizeof(float) = " << sizeof(float)
        << "\nsizeof d = " << sizeof d
        << "\tsizeof(double) = " << sizeof(double)
        << "\nsizeof ld = " << sizeof ld
        << "\tsizeof(long double) = " << sizeof(long double)
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main