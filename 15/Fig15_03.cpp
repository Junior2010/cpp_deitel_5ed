// Figura 15.3: Fig15_03.cpp
// Imprimindo o endereço armazenado em uma variável char *.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const char *word = "again";

    // exibe o valor de char * e, então, o valor de char *
    // static_cast para void *
    cout << "Value of word is: " << word << endl
         << "Value of static_cast<void *>(word) is: "
         << static_cast<const void *>( word ) << endl;
    return 0;
} // fim de main
