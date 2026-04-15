// Figura 3.11: GradeBook.h
// Definição da classe GradeBook. Esse arquivo apresenta a interface pública de
// GradeBook sem revelar as implementações de funções-membro de GradeBook
// que são definidas em GradeBook.cpp.
#include <string>
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // construtor que inicializa courseName
    void setCourseName( string ); // função que configura o nome do curso
    string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook