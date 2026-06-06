#ifndef SHAPE_H
#define SHAPE_H

#include "display.h"


/*
 * Klasa bazowa dla wszystkich ksztaltow
 */
class Shape{
protected:
    // To jest wskaznik na biblioteke wyswietlajaca. Dzieki temu kazdy ksztalt wie, jak ma sie narysowac
    Display* w;

public:
    /*
     * Funkcja: Konstruktor klasy Shape
     * @param w Wskaznik na sposob wyswietlania ksztaltu
     * @return Brak
     */
    Shape(Display* w);

    /*
     * Funkcja: Wirtualny destruktor klasy Shape.
     * @param Brak
     * @return Brak
     */
    virtual ~Shape() = default;

    /*
     * Funkcja: Abstrakcyjna metoda rysujaca ksztalt
     * @param Brak
     * @return Brak
     */ 
    virtual void draw() = 0;

    /*
     * Funkcja: Zmienia sposob wyswietlania ksztaltu
     * @param newDisplay Nowy wskaznik na sposob wyswietlania
     * @return Brak
     */
    void changeDisplay(Display* newDisplay);
};

#endif