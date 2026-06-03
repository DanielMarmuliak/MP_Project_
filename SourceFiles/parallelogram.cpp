#include "../Headers/parallelogram.h"
#include "../Headers/myexceptions.h"


Parallelogram::Parallelogram(Display* w, int a1, int a2, int b1, int b2):Shape(w){
    Validation::validateVectors(a1, a2, b1, b2);

    this->a1 = a1;
    this->a2 = a2;
    this->b1 = b1;
    this->b2 = b2;
}

void Parallelogram::draw(){
    Validation::validateDisplay(w);
    Validation::validateVectors(a1, a2, b1, b2);

    w->drawParallelogram(a1, a2, b1, b2);
}