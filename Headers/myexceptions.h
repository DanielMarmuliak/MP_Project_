#ifndef MYEXCEPTIONS_H
#define MYEXCEPTIONS_H

#include <stdexcept>
#include <string>

class Display;

// Klasa odpowiedzialna za obsługę wyjątków w projekcie
class MyExceptions : public std::runtime_error {
public:
    // Konstruktor przekazujacy komunikat bledu do klasy runtime_error
    MyExceptions(const std::string& message);  
};

// wyjatek dla blednych danych, np. zly promien lub zle wektory
class ValidationException : public MyExceptions {
public:
    ValidationException(const std::string& message);
};

//wyjatek dla problemow zwiazanych z wyswietlaniem
class DisplayException : public MyExceptions {
public:
    DisplayException(const std::string& message);
};

//wyjatek dla problemu zwiazanych z ksztaltami
class ShapeException : public MyExceptions {
public:
    ShapeException(const std::string& message);
};

class Validation {
public:
    static void validateVectors(int a1, int a2, int b1, int b2);
    static void validateDisplay(Display* display);
    static void validateRadius(int r);
};

#endif //MYEXCEPTIONS_H