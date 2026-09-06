// Figura 15.5: Fig15_05.cpp
// Contrastando a entrada de uma string via cin e cin.get.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // cria dois arrays de char, cada um com 80 elementos
    constexpr int SIZE {80};
    char buffer1[SIZE];
    char buffer2[SIZE];

    // utiliza cin para inserir caracteres em buffer1
    cout << "Enter a sentence:" << endl;
    cin >> buffer1;

    // exibe o conteúdo de buffer1
    cout << "\nThe string read with cin was:" << endl
         << buffer1 << endl << endl;

    // usa cin.get para inserir caracteres em buffer2
    cin.get(buffer2, SIZE);


    // exibe o conteúdo buffer2
    cout << "The string read with cin.get was:" << endl
         << buffer2 << endl;
    return 0;
} // fim de main
