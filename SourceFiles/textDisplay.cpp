#include "textDisplay.h"
#include "myexceptions.h" //TRZEBA PÓŹNIEJ DODAĆ TE WYJĄTKI

#include <iostream>

void TextDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
	//WALIDACJA
	std::cout << "Drawing a triangle from vectors (" << a1 << ", " << a2 << "), (" << b1 << ", " << b2 << "). " << std::endl;
}

void TextDisplay::drawCircle(int r) {
	//WALIDACJA
	std::cout << "Drawing a circle with radius " << r << "." << std::endl;
}

void TextDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
	//WALIDACJA
	std::cout << "Drawing a parallelogram from vectors (" << a1 << ", " << a2 << "), (" << b1 << ", " << b2 << "). " << std::endl;
}