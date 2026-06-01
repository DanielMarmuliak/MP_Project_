#pragma once

#include <stdexcept>
#include <string>

// Klasa odpowiedzialna za obsługę wyjątków w projekcie
class MyExceptions : public std::runtime_error {
public:
    // Konstruktor przekazujacy komunikat bledu do klasy runtime_error
    MyExceptions(const std::string& message);
     
};