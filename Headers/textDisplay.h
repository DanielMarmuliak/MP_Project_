#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include "display.h"

/*
 * Klasa wyswietlajaca ksztalty w formie tekstowej
 */
class TextDisplay : public Display {
public:
	/*
     * Funkcja: Wyswietla tekstowy opis rysowania trojkata
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
	void drawTriangle(int a1, int a2, int b1, int b2) override;

	/*
     * Funkcja: Wyswietla tekstowy opis rysowania kola
     * @param r Promien kola
     * @return Brak
     */
	void drawCircle(int r) override;

	/*
     * Funkcja: Wyswietla tekstowy opis rysowania rownolegloboku
     * @param a1 Wspolrzedna x pierwszego wektor
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
	void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif //TEXTDISPLAY_H
