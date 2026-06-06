#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H


#include "shape.h"

/*
 * Klasa reprezentujaca rownoleglobok
 */
class Parallelogram: public Shape{
private:
    int a1;
    int a2;
    int b1;
    int b2;

public:
    /*
     * Funkcja: Konstruktor klasy Parallelogram
     * @param w Wskaznik na sposob wyswietlania
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
    Parallelogram(Display* w, int a1, int a2, int b1, int b2);

    /*
     * Funkcja: Rysuje rownoleglobok przy uzyciu aktualnego Display
     * @param Brak
     * @return Brak
     */
    void draw() override;
};

#endif