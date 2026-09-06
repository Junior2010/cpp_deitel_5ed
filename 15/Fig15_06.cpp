// Figura 15.6: Fig15_06.cpp
// Inserindo caracteres utilizando a função-membro cin getline.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr int SIZE{80};
    char buffer[SIZE]; // cria array de 80 caracteres

    // insere caracteres no buffer via função cin getline
    cout << "Enter a sentence:" << endl;
    cin.getline(buffer, SIZE);

    // exibe o conteúdo do buffer
    cout << "\nThe sentence entered is:" << endl << buffer << endl;
    return 0;
} // fim de main
