#include "complexShape.h"

#include <iostream>
#include <ostream>

#include "myexceptions.h"

//Konstruktor złożonej figury
ComplexShape::ComplexShape(Display *w): Shape(w), shapesCount(0){
    for (int i=0; i<MAX_SHAPES; i++) {
        shape[i] = nullptr;
    }
}

//Destruktor
ComplexShape::~ComplexShape() {
    // std::cout<<"~ComplexShape()"<<std::endl; DEBUG
}

bool ComplexShape::add(Shape* o) {
    Validation::validateShape(o);

    //Sprawdzanie zakresu (max. 5 figur)
    if (shapesCount >= MAX_SHAPES) {
        return false;
    }

    //Przypisanie elementu do kolejnego elementu tablicy
    shape[shapesCount++] = o;
    return true;
}

void ComplexShape::draw() {
    Validation::validateDisplay(w);

    //Pętla rysująca każdy element z osobna, ale z włąsnej biblioteki
    for (int i=0; i<shapesCount; i++) {
        shape[i]->draw();
    }
}