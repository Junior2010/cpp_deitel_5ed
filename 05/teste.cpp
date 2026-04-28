#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::left;

int main() {
    cout << setw(5) << left << "Ano" << setw(10) << "Nome" << setw(6) << "Idade" << endl;
    cout << setw(5) << left << 2026 << setw(10) << "João da S." << setw(6) << 30 << endl;
    cout << setw(5) << left << 2025 << setw(10) << "José" << setw(6) << 31 << endl;
    cout << setw(5) << left << 2024 << setw(10) << "Maria Antonieta da Silva Junqueira"<< setw(6) << 32 << endl;;
    return 0;
}