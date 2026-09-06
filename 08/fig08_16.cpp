// Figura 8.16: fig08_16.cpp
// Operador Sizeof quando utilizado em um nome de array
// retorna o número de bytes no array.
#include <iostream>
using std::cout;
using std::endl;

size_t getSize( double * ); // protótipo

int main()
{
    double array[20]; // 20 doubles; o que ocupa 160 bytes em nosso sistema

    cout << "The number of bytes in the array is " << sizeof array;

    cout << "\nThe number of bytes returned by getSize is "
        << getSize( array ) << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main

// retorna o tamanho de ptr
size_t getSize( double *ptr )
{
    return sizeof ptr;
} // fim da função getSize