// Figura 15.9: Fig15_09.cpp
// Controlando a precisão de valores de ponto flutuante.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using std::sqrt;

int main()
{
    double root2{sqrt( 2.0 )}; // calcula a raiz quadrada de 2
    int places; // precisão, varia de 0-9

    cout << "Square root of 2 with precisions 0-9" << endl
        << "Precision set by ios_base number function "
        << "precision:" << endl;

    cout << fixed; // usa notação de ponto fixo

    // exibe raiz quadrada utilizando a precisão da função ios_base
    for (places =0; places <= 9; places++)
    {
        cout.precision(places);
        cout << root2 << endl;
    } // fim do for

    cout << "\nPrecision set by stream manipulator "
        << setprecision(places) << root2 << endl;

    // configura a precisão de cada dígito, então exibe a raiz quadrada
    for (places = 0; places <= 9; places++)
        cout << setprecision(places) << root2 << endl;

    return 0;
} // fim de mainS