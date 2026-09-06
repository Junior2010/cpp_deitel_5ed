// Figura 15.4: Fig15_04.cpp
// Utilizando funções-membro get, put e eof.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int character; // utiliza int, porque char não pode representar EOF

    // solicita para o usuário inserir linha de texto
    cout << "Before input, cin.eof() is " << cin.eof() << endl
         << "Enter a sentence followed by end-of-file:" << endl;

    // utiliza get para ler cada caractere; utiliza put para exibi-los
    while (( character = cin.get() ) !=EOF)
        cout.put( character );

    // exibe caractere de fim do arquivo
    cout << "\nEOF in this system is: " << character << endl;
    cout << "After input of EOF, cin.eof() is " << cin.eof() << endl;
    return 0;
} // fim de main
