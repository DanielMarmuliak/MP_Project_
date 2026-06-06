#ifndef DISPLAY_H
#define DISPLAY_H


//Klasa abstrakcujna z trzema metodami czysto wirtualnymi, powinna zostać nadpisana przez graphicalDisplay lub textDisplay, KLASA NADRZĘDNA
class Display {
public:
	/*
     * Funkcja: Wirtualny destruktor klasy Display
     * @param Brak
     * @return Brak
     */
	virtual ~Display() = default;

	/*
     * Funkcja: Rysuje trojkat na podstawie dwoch wektorow
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
	virtual void drawTriangle(int a1, int a2, int b1, int b2) = 0;

	/*
     * Funkcja: Rysuje kolo o podanym promieniu
     * @param r Promien kola
     * @return Brak
     */
	virtual void drawCircle(int r) = 0;

	/*
     * Funkcja: Rysuje rownoleglobok na podstawie dwoch wektorow
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
	virtual void drawParallelogram(int a1, int a2, int b1, int b2) = 0;
};
//Klasy graphicalDisplay i textDisplay będą podrzędne.

#endif //DISPLAY_H