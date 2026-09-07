// Figura 8.20: fig08_20.cpp
// Utilizando notações de subscrito e de ponteiro com arrays.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int b[]{ 10, 20, 30, 40 }; // cria o array b de 4 elementos
    int *bPtr{b}; // configura bPtr para apontar para o array b

    // gera saída do array b utilizando notação de subscrito de array
    cout << "Array b printed with:\n\nArray subscript notation\n";

    for ( int i{0}; i < 4; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';

    // gera saída do array b utilizando a notação de nome de array e a de ponteiro/deslocamento
    cout << "\nPointer/offset notation where "
        << "the pointer is the array name\n";

    for (int offset1{0}; offset1 < 4; offset1++)
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';

    // gera saída do array b utilizando bPtr e notação de subscrito de array
    cout << "\nPointer subscript notation\n";

    for (int j{0}; j < 4; j++)
        cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';

    cout << "\nPointer/offset notation\n";

    // gera saída do array b utilizando bPtr e notação de ponteiro/deslocamento
    for (int offset2{0}; offset2 < 4; offset2++)
        cout << "*(bPtr + " << offset2 << ") = "
            << *(bPtr + offset2) << '\n';

    return 0; // indica terminação bem-sucedida
} // fim de main