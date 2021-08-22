#include <iostream>

class Resistor {
public:
  Resistor(double r = 0.0);
  Resistor(const Resistor& r);
  
  // Member Operators
  Resistor& operator=(const Resistor& other);
      
  // Non-Member Operators
  friend bool operator==(const Resistor& r1, const Resistor& r2);
  friend Resistor operator+(const Resistor& r1, const Resistor& r2);
  
  friend std::ostream& operator<<(std::ostream& out, const Resistor& r);
  friend std::istream& operator>>(std::istream& in, Resistor& r);
  
private:
  double res;
};