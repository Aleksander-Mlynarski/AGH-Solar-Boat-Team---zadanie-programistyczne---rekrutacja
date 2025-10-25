#ifndef ZADANIE_H
#define ZADANIE_H

#include <cmath>

class globalna_pozycja //klasa w której przechowuje pozycje
{
public:
    double x;
    double y;
};

class obiekt //klasa gdzie znajdują sie wspolrzedne obiektu
{
public:
    double o_x;
    double o_y;
};

class Pozycja
{
public:
    globalna_pozycja licz(//funkcja licz przyjmuje nastepujace argumenty: )
        double gl_x, double gl_y,double kierunek, const obiekt& pozycja_obiektu); //odczytuje tylko dane, nie tworząc kopi i nic nie zmieniając.

};
#endif //ZADANIE_H
