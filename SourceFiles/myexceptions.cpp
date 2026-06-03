#include "../Headers/myexceptions.h"

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

void Validation::validateVectors(int a1, int a2, int b1, int b2){
 if(a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0)
  throw ValidationException("In triangle a1, a2 and b1 must be positive, and b2 must be negative");
}

void Validation::validateDisplay(Display* display){
 if(display == nullptr)
  throw DisplayException("Error: Display pointer cannot be null");
}

void Validation::validateRadius(int r){
 if(r <= 0)
  throw ValidationException("Circle radius must be positive");
}



