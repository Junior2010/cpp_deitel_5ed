// Figura 5.10: GradeBook.cpp
// Definições de função-membro para a classe GradeBook que
// utiliza uma instrução switch para contar as notas A, B, C, D e F.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// construtor inicializa courseName com string fornecido como argumento;
// inicializa membros de dados de contador como 0
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // valida e armazena courseName
    aCount = 0; // inicializa a contagem de notas A como 0
    bCount = 0; // inicializa a contagem de notas B como 0
    cCount = 0; // inicializa a contagem de notas C como 0
    dCount = 0; // inicializa a contagem de notas D como 0
    fCount = 0; // inicializa a contagem de notas F como 0
}// fim do construtor GradeBook

// função para configurar o nome do curso; limita o nome a 25 ou menos caracteres
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        courseName = name; // armazena o nome do curso no objeto
    else // se o nome tiver mais que 25 caracteres
    { // configura courseName como os primeiros 25 caracteres do nome de parâmetro
        courseName = name.substr( 0, 25 ); // seleciona os primeiros 25 caracteres
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // fim do if...else
} // fim da função setCourseName

// função para recuperar o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
} // fim da função getCourseName

// exibe uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
    // essa instrução chama getCourseName para obter o
    // nome do curso que esse GradeBook representa
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
} // fim da função displayMessage

// insere número arbitrário de notas fornecidas pelo usuário; atualiza o contador de notas
void GradeBook::inputGrades()
{
    int grade;// nota inserida pelo usuário

    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    // faz loop até usuário digitar a seqüência de teclas de fim do arquivo
    while ( ( grade = cin.get() ) != EOF )
    {
        // determina que nota foi inserida
        switch ( grade ) // instrução switch aninhada em while
        {
            case 'A': // a nota era letra A maiúscula
            case 'a': // ou a minúscula
                aCount++; // incrementa aCount
                break; // necessário para fechar switch

            case 'B': // a nota era B maiúscula
            case 'b': // ou b minúscula
                bCount++; // incrementa bCount
                break; // fecha o switch

            case 'C': // fecha o switch
            case 'c': // ou c minúscula
                cCount++; // incrementa cCount
                break; // fecha o switch

            case 'D': // a nota era D maiúscula
            case 'd': // ou d minúscula
                dCount++;// incrementa dCount
                break;// fecha o switch

            case 'F': // a nota era F maiúscula
            case 'f': // ou f minúscula
                fCount++; // incrementa fCount
                break; // fecha o switch

            case '\n':// ignora nova linha,
            case '\t':// tabulações
            case ' ': // e espaços em entrada
                break; // fecha o switch

            default: // captura todos os outros caracteres
                cout << "Incorrect letter grade entered."
                    << " Emter a new grade." << endl;
                break;// opcional; sairá de switch de qualquer jeito
        } // fim de switch
    }// fim do while
}// fim da função inputGrades

// exibe um relatório baseado nas notas inseridas pelo usuário
void GradeBook::displayGradeReport()
{
    // gera a saída de resumo de resultados
    cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount  // exibe número de notas A
        << "\nB: " << bCount  // exibe número de notas B
        << "\nC: " << cCount // exibe número de notas C
        << "\nD: " << dCount // exibe número de notas D
        << "\nF: " << fCount // exibe número de notas F
        << endl;
} // fim da função displayGradeReport