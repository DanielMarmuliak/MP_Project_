#include "parallelogram.h"
#include "myexceptions.h"


void Parallelogram::validateVectors(int a1, int a2, int b1, int b2) const{
    if(a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0)
        throw ValidationException("In parallelogram a1, a2 and b1 must be positive, and b2 must be negative");
}

Parallelogram::Parallelogram(Display* w, int a1, int a2, int b1, int b2)
 :Shape(w){
    validateVectors(a1, a2, b1, b2);

    this->a1 = a1;
    this->a2 = a2;
    this->b1 = b1;
    this->b2 = b2;
}

void Parallelogram::draw(){
    validateDisplay(w);
    validateVectors(a1, a2, b1, b2);

    w->drawParallelogram(a1, a2, b1, b2);
}