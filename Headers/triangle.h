#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle: public Shape{
private:
    int a1;
    int a2;
    int b1;
    int b2;


public:
    Triangle(Display* w, int a1, int a2, int b1, int b2);

    //rysuje trojkat za pomoca wybranego wyswietlania
    void draw() override;
};

#endif