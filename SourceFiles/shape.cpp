#include "../Headers/shape.h"
#include "../Headers/myexceptions.h"

Shape::Shape(Display* w){
    Validation::validateDisplay(w);
    this->w = w;
}

void Shape::changeDisplay(Display* newDisplay){
    Validation::validateDisplay(newDisplay);
    w = newDisplay;
}