// Figura 7.26: fig07_26.cpp
// Demonstrando o template de classe vector da C++ Standard Library.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector< int > & ); // exibe o vetor
void inputVector( vector< int > & );// insere valores no vetor

int main()
{
    vector< int > integers1( 7 );// vector< int > de 7 elementos
    vector< int > integers2( 10 );// vector< int > de 10 elementos

    // imprime o tamanho e o conteúdo de integers1
    cout << "Size of vector integers1 is " << integers1.size()
        << "\nvector after initialization:" << endl;
    outputVector( integers1 );

    // imprime o tamanho e o conteúdo de integers2
    cout << "\nSize of vector integers2 is " << integers2.size()
        << "\nvector after initialization:" << endl;
    outputVector( integers2 );

    // insere e imprime integers1 e integers2
    cout << "\nEnter 17 integers:" << endl;
    inputVector( integers1 );
    inputVector( integers2 );

    cout << "\nAfter input, the vectors contain:\n"
        << "integers1:" << endl;
    outputVector( integers1 );
    cout << "integers2:" << endl;
    outputVector( integers2 );

    // utiliza operador de desigualdade (! =) com objetos vector
    
}