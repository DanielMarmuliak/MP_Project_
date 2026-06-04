#ifndef COMPLEXSHAPE_H
#define COMPLEXSHAPE_H

#include "shape.h"

class ComplexShape: public Shape {
private:
    static const int MAX_SHAPES = 5;
    //Zmienna musi być statyczna, bo inaczej wyrzuca błąd
    Shape* shape[MAX_SHAPES];
    int shapesCount;

public:
    ComplexShape(Display* w);
    ~ComplexShape() override;

    bool add(Shape* o);
    void draw() override;
};

#endif
