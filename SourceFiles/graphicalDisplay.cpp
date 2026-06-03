#include "graphicalDisplay.h"

#include<algorithm>
#include<iostream>
#include<vector>
#include<cmath>

#include "myexceptions.h"
#include "triangle.h"

//Konstruktor domyślny
GraphicalDisplay::GraphicalDisplay() {}

void GraphicalDisplay::drawLine(int xmin,int xmax, char letter) const {
    for (int x = xmin; x <= xmax; ++x) {
        std::cout << letter;
    }
    std::cout << letter;
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    Validation::validateVectors(a1, a2, b1, b2);
}

void GraphicalDisplay::drawCircle(int r){
    Validation::validateRadius(r);
};

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    Validation::validateVectors(a1, a2, b1, b2);
}
