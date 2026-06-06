#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H

#include <stdexcept>
#include <string>

#include "shape.h"

class Display;

/*
 * Klasa bazowa dla wszystkich wyjatkow w projekcie
 */
class MyExceptions : public std::runtime_error {
public:
    /*
     * Funkcja: Konstruktor klasy MyExceptions
     * @param message Komunikat bledu przekazywany do std::runtime_error
     * @return Brak
     */
    MyExceptions(const std::string& message);  
};

/*
 * Klasa reprezentujaca blad walidacji danych
 */
class ValidationException : public MyExceptions {
public:
    /*
     * Funkcja: Konstruktor klasy ValidationException
     * @param message Komunikat bledu walidacji
     * @return Brak
     */
    ValidationException(const std::string& message);
};

/*
 * Klasa reprezentujaca blad zwiazany z wyswietlaniem
 */
class DisplayException : public MyExceptions {
public:
    /*
     * Funkcja: Konstruktor klasy DisplayException
     * @param message Komunikat bledu wyswietlania
     * @return Brak
     */
    DisplayException(const std::string& message);
};

/*
 * Klasa reprezentujaca blad zwiazany z ksztaltem
 */
class ShapeException : public MyExceptions {
public:
    /*
     * Funkcja: Konstruktor klasy ShapeException
     * @param message Komunikat bledu ksztaltu
     * @return Brak
     */
    ShapeException(const std::string& message);
};

/*
 * Klasa pomocnicza zawierajaca statyczne funkcje walidujace dane
 */
class Validation {
public:
    /*
     * Funkcja: Sprawdza poprawnosc wektorow figury
     * @param a1 Wspolrzedna x pierwszego wektora
     * @param a2 Wspolrzedna y pierwszego wektora
     * @param b1 Wspolrzedna x drugiego wektora
     * @param b2 Wspolrzedna y drugiego wektora
     * @return Brak
     */
    static void validateVectors(int a1, int a2, int b1, int b2);

    /*
     * Funkcja: Sprawdza, czy wskaznik na Display nie jest pusty
     * @param display Wskaznik na sposob wyswietlania
     * @return Brak
     */
    static void validateDisplay(Display* display);

    /*
     * Funkcja: Sprawdza, czy promien kola jest dodatni
     * @param r Promien kola
     * @return Brak
     */
    static void validateRadius(int r);

    /*
     * Funkcja: Sprawdza, czy wskaznik na Shape nie jest pust
     * @param shape Wskaznik na ksztalt
     * @return Brak
     */
    static void validateShape(Shape* shape);
};

#endif //MYEXCEPTIONS_H