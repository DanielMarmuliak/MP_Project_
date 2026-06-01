#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include "display.h"

class TextDisplay : public Display {
private:
	// sprawdza czy podany promień jest dodatni, jeśli nie, rzuca wyjątek
	void validateCircle(int r) const;

	// sprawdza czy podane wektory są poprawne, jeśli nie, rzuca wyjątek
	void validateVectors(int a1, int a2, int b1, int b2) const;

public:
	void drawTriangle(int a1, int a2, int b1, int b2) override;
	void drawCircle(int r) override;
	void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif //TEXTDISPLAY_H
