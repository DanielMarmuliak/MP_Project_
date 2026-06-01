#include "circle.h"
#include "myexceptions.h"

void Circle::validateRadius(int r) const{
    if(r <= 0)
        throw ValidationException("Circle radius must be positive");
}

Circle::Circle(Display* w, int r)
 :Shape(w){
    validateRadius(r);
    this->r = r;
}

void Circle::draw(){
    validateDisplay(w);
    validateRadius(r);
    
    w->drawCircle(r);
}