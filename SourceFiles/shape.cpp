#include "shape.h"
#include "myexceptions.h"

void Shape::validateDisplay(Display* display){
    if(display == nullptr)
        throw DisplayException("Error: Display pointer cannot be null");
}

Shape::Shape(Display* w){
    validateDisplay(w);
    this->w = w;
}

void Shape::changeDisplay(Display* newDisplay){
    validateDisplay(newDisplay);
    w = newDisplay;
}