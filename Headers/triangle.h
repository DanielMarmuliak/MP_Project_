#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

/*
 * Klasa reprezentujaca trojkat
 */
class Triangle: public Shape{
private:
    int a1;
    int a2;
    int b1;
    int b2;

public:
    /*
     * Funkcja: Konstruktor klasy Triangle
     * @param w Wskaznik na sposob wyswietlania
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
    Triangle(Display* w, int a1, int a2, int b1, int b2);

    /*
     * Funkcja: Rysuje trojkat przy uzyciu aktualnego Display
     * @param Brak
     * @return Brak
     */
    void draw() override;
};

#endif