#include "zadanie.h"
#include <iostream>

globalna_pozycja Pozycja::licz(
    double gl_x,
    double gl_y,
    double kierunek,
    const obiekt& pozycja_obiektu)
{
    // Bierzemy wartości sinusa i cosinusa kierunku
    double cosinus = std::cos(kierunek);
    double sinus = std::sin(kierunek);

    // Zalozenie: o_x = PRZÓD, o_y = BOK (zgodnie ze wzorami)
    double zmiana_x = pozycja_obiektu.o_x * cosinus - pozycja_obiektu.o_y * sinus ;
    double zmiana_y = pozycja_obiektu.o_x * sinus + pozycja_obiektu.o_y * cosinus ;

    globalna_pozycja finalna_pozycja;
    finalna_pozycja.x = gl_x + zmiana_x;
    finalna_pozycja.y = gl_y + zmiana_y;

    return finalna_pozycja;
}