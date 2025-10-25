#include <iostream>
#include "zadanie.h"
#include <cmath>

int main()
{
    Pozycja p;
    obiekt obj;

    obj.o_x = -2;
    obj.o_y = 3;

    double x_lodzi = 0;
    double y_lodzi = 0;
    double kierunek = 3.14 / 2; // 90*

    globalna_pozycja wynik = p.licz(x_lodzi, y_lodzi, kierunek, obj);

    std::cout<<"x obiektu: "<< wynik.x<<std::endl;
    std::cout<<"y obiektu: "<<wynik.y;
    return 0;
}