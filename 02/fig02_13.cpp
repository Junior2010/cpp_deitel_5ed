// Figura 2.13: fig03_13.cpp
// Comparando inteiros utilizando isntruções if, operandos relacionais
// e operadores de igualdade
#include <iostream>

using std::cout; // o programa utiliza cout
using std::cin;  // o programa utiliza cin
using std::endl; // o prigrama utiliza endl
                 
// a função main inicia a execução do programa
int main()
{
    int number1; // primeiro inteiro a comparar
    int number2; // segundo inteiro a comparar

    cout << "Enter two integers to compare: "; // solicita dados ao usuário
    cin >> number1 >> number2; // lê dois inteiros fornecidos pelo usuário

    if (number1 == number2)
        cout << number1 << " == " << number2 << endl;

    if (number1 != number2)
        cout << number1 << " != " << number2 << endl;

    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;

    if (number1 > number2) 
        cout << number1 << " > " << number2 << endl;

    if (number1 <= number2)
        cout << number1 << " <= " << number2 << endl;

    if (number1 >= number2)
        cout << number1 << " >= " << number2 << endl;

    return 0; // indica que o programa terminou com sucesso
} // fim da funçào main
