#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape{
private:
    int r;
    //sprawdza czy promien kola jest poprawny
    void validateRadius(int r) const;

public:
    // konstruktor ustwaiajacy sposob wyswietlania i promien kola 
    Circle(Display* w, int r);

    //rysuje kolo za pomoca wybranego sposobu wyswietlania
    void draw() override;
};

#endif