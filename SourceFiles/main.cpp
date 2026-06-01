#include <iostream>

#include "textDisplay.h"
#include "circle.h"
#include "triangle.h"
#include "parallelogram.h"
#include "myexceptions.h"

int main() {
	try {
        // Tworzymy sposob wyswietlania
        Display* textDisplay = new TextDisplay();

        // Tworzymy ksztalty
        Shape* triangle = new Triangle(textDisplay, 3, 2, 2, -2);
        Shape* parallelogram = new Parallelogram(textDisplay, 3, 2, 2, -2);
        Shape* circle = new Circle(textDisplay, 5);

        // Rysujemy ksztalty tekstowo
        triangle->draw();
        parallelogram->draw();
        circle->draw();

        // Usuwamy obiekty z pamieci
        delete triangle;
        delete parallelogram;
        delete circle;
        delete textDisplay;
    }
    catch (const MyExceptions& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

	return 0;
}