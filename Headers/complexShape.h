#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "shape.h"

// Klasa reprezentujaca ksztalt zlozony z maksymalnie 5 ksztaltow
class ComplexShape: public Shape {
private:
    static const int MAX_SHAPES = 5;
    //Zmienna musi być statyczna, bo inaczej wyrzuca błąd
    Shape* shape[MAX_SHAPES];
    int shapesCount;

public:
    /*
     * Funkcja: Konstruktor klasy ComplexShape.
     * @param w Wskaznik na sposob wyswietlania
     * @return Brak
     */
    ComplexShape(Display* w);
    /*
     * Funkcja: Destruktor klasy ComplexShape
     * @param Brak
     * @return Brak
     */
    ~ComplexShape() override;

    /*
     * Funkcja: Dodaje ksztalt do kolekcji
     * @param o Wskaznik na dodawany ksztalt
     * @return true, jesli dodano ksztalt; false, jesli kolekcja jest pelna
     */
    bool add(Shape* o);

    /*
     * Funkcja: Rysuje wszystkie ksztalty dodane do kolekcji
     * @param Brak
     * @return Brak
     */
    void draw() override;
};

#endif
