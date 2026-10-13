// Figura 9.2: Time.cpp
// Definições de função-membro para a classe Time.
#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h" // inclui a definição da classe Time a partir de Time.h

// O construtor de Time inicializa cada membro de dados como zero.
// Assegura que todos os objetos Time iniciem em um estado consistente.
Time::Time()
{
    hour = minute = second = 0;
} // fim do construtor de Time

// configura novo valor de Time utilizando a hora universal; assegura que
// os dados permaneçam consistentes configurando valores inválidos como zero
void Time::setTime( int h, int m, int s )
{
    hour = ( h >=0 && h < 24 ) ? h : 0; // valida horas
    minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
    second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
} // fim da função setTime

// imprime a hora no formato de data/hora universal (HH:MM:SS)
void Time::printUniversal()
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // fim da função printUniversal

// imprime a hora no formato-padrão de data/hora (HH:MM:SS AM ou PM)
void Time::printStandard()
{
    cout << ( ( hour == 0 || hour == 12 )  ? 12 : hour % 12 ) << ":"
        << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 )
        << second << ( hour < 12 ? " AM" : " PM" );
} // fim da função printStandard