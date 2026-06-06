#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

// Klasa reprezentujaca kolo
class Circle: public Shape{
private:
    int r;
public:
    /*
     * Funkcja: konstruktor klasy Circle
     * @param w wskaznik na sposob wyswietlania
     * @param r promien kola
     * @return Brak
     */
    Circle(Display* w, int r);

    /*
     * Funkcja: rysuje kolo przy uzyciu aktualnego Display
     * @param Brak
     * @return Brak
     */
    void draw() override;
};

#endif