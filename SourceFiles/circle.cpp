#include "../Headers/circle.h"
#include "../Headers/myexceptions.h"



Circle::Circle(Display* w, int r):Shape(w){
    Validation::validateRadius(r);
    this->r = r;
}

void Circle::draw(){
    Validation::validateDisplay(w);
    Validation::validateRadius(r);
    
    w->drawCircle(r);
}