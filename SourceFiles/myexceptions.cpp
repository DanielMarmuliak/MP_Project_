#include "../Headers/myexceptions.h"


MyExceptions::MyExceptions(const std::string& message) 
 : std::runtime_error(message) {}


ValidationException::ValidationException(const std::string& message)
 : MyExceptions(message) {}


DisplayException::DisplayException(const std::string& message)
 : MyExceptions(message) {}


ShapeException::ShapeException(const std::string& message)
 : MyExceptions(message) {}

void Validation::validateVectors(int a1, int a2, int b1, int b2){
 if(a1 <= 0 || a2 <= 0 || b1 <= 0 || b2 >= 0)
  throw ValidationException("Invalid vector values. a1, a2 and b1 must be positive, and b2 must be negative");
}

void Validation::validateDisplay(Display* display){
 if(display == nullptr)
  throw DisplayException("Error: Display pointer cannot be null");
}

void Validation::validateRadius(int r){
 if(r <= 0)
  throw ValidationException("Circle radius must be positive");
}

void Validation::validateShape(Shape* shape) {
 if(shape == nullptr) {
  throw ValidationException("Error: Shape pointer cannot be null");
 }
}



