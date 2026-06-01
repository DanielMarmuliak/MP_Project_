#include "myexceptions.h"

// Implementacja konstruktora klasy MyExceptions, który przekazuje komunikat błędu do klasy bazowej std::runtime_error
MyExceptions::MyExceptions(const std::string& message) 
 : std::runtime_error(message) {}

// konstruktor wyjatku walidacji 
ValidationException::ValidationException(const std::string& message)
 : MyExceptions(message) {}

// konstruktor wyjatku wyswietlania
DisplayException::DisplayException(const std::string& message)
 : MyExceptions(message) {}

// konstruktor wyjatku ksztaltu
ShapeException::ShapeException(const std::string& message)
 : MyExceptions(message) {}
