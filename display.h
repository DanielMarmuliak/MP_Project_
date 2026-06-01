#ifndef DISPLAY_H
#define DISPLAY_H


//Klasa abstrakcujna z trzema metodami czysto wirtualnymi, powinna zostać nadpisana przez graphicalDisplay lub textDisplay, KLASA NADRZĘDNA
class Display {
public:
	virtual ~Display() = default;

	virtual void drawTriangle(int a1, int a2, int b1, int b2) = 0;
	virtual void drawCircle(int r) = 0;
	virtual void drawParallelogram(int a1, int a2, int b1, int b2) = 0;
};
//Klasy graphicalDisplay i textDisplay będą podrzędne.

#endif //DISPLAY_H