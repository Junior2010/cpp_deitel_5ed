// Figura 15.8: Fig15_08.cpp
// Utilizando manipuladores de fluxo hex, oct, dec e setbase.
#include <iostream>
using std::cin;
using std::cout;
using std::dec;
using std::endl;
using std::hex;
using std::oct;

#include <iomanip>
using std::setbase;

int main()
{
    int number;

    cout << "Enter a decimal number: ";
    cin >> number; // Insere número

    // utiliza manipulador de fluxo hex para mostrar o número hexadecimal
    cout << number << " in hexadecimal is: " << hex
        << number << endl;

    // utiliza manipulador de fluxo oct para mostrar número octal
    cout << dec << number << " in octal is: "
        << oct << number << endl;

    // utiliza manipulador de fluxo setbase para mostrar número decimal
    cout << setbase( 10 ) << number << " in decimal is: "
        << number << endl;
    return 0;
} // fim de main
