#ifndef SHAPE_H
#define SHAPE_H

#include "display.h"


// Klasa bazowa dla wszystkich ksztaltow 
class Shape{
protected:
    // To jest wskaznik na biblioteke wyswietlajaca. Dzieki temu kazdy ksztalt wie, jak ma sie narysowac
    Display* w;

public:
    Shape(Display* w);

    // Wirtualny destruktor potrzebny przy dziedziczeniu 
    virtual ~Shape() = default;

    // Metoda abstrakcyjna do rysowania ksztaltu 
    virtual void draw() = 0;

    // Zmienia sposob wyswietlania ksztaltu
    void changeDisplay(Display* newDisplay);
};

#endif