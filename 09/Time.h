// Figura 9.1: Time.h
// Declaração da classe Time.
// Funções-membro são definidas em Time.cpp

// impede múltiplas inclusões de arquivo de cabeçalho
#ifndef TIME_H
#define TIME_H

// definição da classe Time
class Time
{
public:
    Time(); // construtor
    void setTime( int, int, int ); // configura hora, minuto e segundo
    void printUniversal(); // imprime a hora no formato de data/hora universal
    void printStandard(); // imprime a hora no formato-padrão de data/hora
private:
    int hour; // 0 - 23 (formato de relógio de 24 horas)
    int minute; // 0 - 59
    int second; // 0 - 59
}; // fim da classe Time
#endif //TIME_H
