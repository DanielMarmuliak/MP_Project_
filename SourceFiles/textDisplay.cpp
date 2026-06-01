#include "textDisplay.h"
#include "myexceptions.h" //TRZEBA PÓŹNIEJ DODAĆ TE WYJĄTKI

#include <iostream>

void TextDisplay::validateCircle(int r) const{
	if(r <= 0)
		throw ValidationException("Error: Radius must be positive");
}

void TextDisplay::validateVectors(int a1, int a2, int b1, int b2) const{
	if(a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0)
		throw ValidationException("Error: a1, a2, b1 must be positive, and b2 must be negative");
}


void TextDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
	validateVectors(a1, a2, b1, b2);

	std::cout << "Drawing a triangle from vectors (" << a1 << ", " << a2 << "), (" << b1 << ", " << b2 << "). " << std::endl;
}

void TextDisplay::drawCircle(int r) {
	validateCircle(r);

	std::cout << "Drawing a circle with radius " << r << "." << std::endl;
}

void TextDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
	validateVectors(a1, a2, b1, b2);

	std::cout << "Drawing a parallelogram from vectors (" << a1 << ", " << a2 << "), (" << b1 << ", " << b2 << "). " << std::endl;
}