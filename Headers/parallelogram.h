#pragma once


#include "shape.h"

class Parallelogram: public Shape{
private:
    int a1;
    int a2;
    int b1;
    int b2;

    // sprawdza, czy wartosci wektorow sa poprawne 
    void validateVectors(int a1, int a2, int b1, int b2) const;
public:
    Parallelogram(Display* w, int a1, int a2, int b1, int b2);

    //rysuje rownoleglobok za pomoca wybranego wyswietlania
    void draw() override;
};