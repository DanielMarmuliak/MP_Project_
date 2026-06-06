#ifndef GRAPHICS_DISPLAY_H
#define GRAPHICS_DISPLAY_H

#include "display.h"
#include <vector>

/*
 * Funkcja: Oblicza punkt przeciecia odcinka z aktualnym wierszem yPos
 * @param x0 Wspolrzedna x pierwszego wierzcholka
 * @param y0 Wspolrzedna y pierwszego wierzcholka
 * @param x1 Wspolrzedna x drugiego wierzcholka
 * @param y1 Wspolrzedna y drugiego wierzcholka
 * @param yPos Aktualnie analizowany wiersz
 * @return Wspolrzedna x punktu przeciecia
 */
double linearInterpolation(int x0, int y0, int x1, int y1, int yPos);

// Klasa wyswietlajaca ksztalty graficznie w konsoli
class GraphicalDisplay : public Display {
private:
    /*
     * Funkcja: Wypisuje jedna linie figury od xmin do xmax
     * @param xmin Pierwsza pozycja znaku w linii
     * @param xmax Ostatnia pozycja znaku w linii
     * @param letter Znak uzywany do rysowania figury
     * @return Brak
     */
    void drawLine(int xmin, int xmax, char letter) const;

    /*
     * Funkcja: Wyznacza przeciecia aktualnego wiersza z jedna krawedzia figury
     * @param x0 Wspolrzedna x pierwszego wierzcholka krawedzi
     * @param y0 Wspolrzedna y pierwszego wierzcholka krawedzi
     * @param x1 Wspolrzedna x drugiego wierzcholka krawedzi
     * @param y1 Wspolrzedna y drugiego wierzcholka krawedzi
     * @param yPos Aktualnie analizowany wiersz
     * @param limit Wektor przechowujacy znalezione przeciecia
     * @return Brak
     */
    void figureLimits(int x0, int y0, int x1, int y1, int yPos, std::vector<double>& limit);

    /*
     * Funkcja: Wyznacza zakres rysowania dla danego wiersza figury
     * @param yPos Aktualnie analizowany wiersz
     * @param vertices Wierzcholki figury
     * @param letter Znak uzywany do rysowania figury
     * @return Brak
     */
    void getDrawingLocation(int yPos, std::vector<std::pair<int,int>>& vertices, char letter);

public:
    /*
     * Funkcja: Konstruktor klasy GraphicalDisplay
     * @param Brak
     * @return Brak
     */
    GraphicalDisplay();

    /*
     * Funkcja: Rysuje trojkat znakami 't' w konsoli
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
    void drawTriangle(int a1, int a2, int b1, int b2) override;

    /*
     * Funkcja: Rysuje kolo znakami 'c' w konsoli
     * @param r Promien kola
     * @return Brak
     */
    void drawCircle(int r) override;

    /*
     * Funkcja: Rysuje rownoleglobok znakami 'p' w konsoli
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
    void drawParallelogram(int a1, int a2, int b1, int b2) override;
};

#endif