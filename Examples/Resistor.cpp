#include "Resistor.h"

Resistor::Resistor(double r) :
  res(r) { }

Resistor::Resistor(const Resistor& r) :
  res(r.res) { }

// Member Operators
Resistor& Resistor::operator=(const Resistor& other) {
  res = other.res;
  return *this;
}
   
// Non-Member Operators   
bool operator==(const Resistor& r1, const Resistor& r2) {
  return r1.res == r2.res;
}

Resistor operator+(const Resistor& r1, const Resistor& r2) {
  Resistor r(r1.res + r2.res);
  return r;
}

std::ostream& operator<<(std::ostream& out, const Resistor& r) {
  if (r.res > 1e9) { out << r.res / 1e9 << "GOhm"; }
  else if (r.res > 1e6) { out << r.res / 1e6 << "MOhm"; }
  else if (r.res > 1e3) { out << r.res / 1e3 << "kOhm"; }
  else { out << r.res << "Ohm"; }
  return out;
}

std::istream& operator>>(std::istream& in, Resistor& r) {
  in >> r.res;
  return in;
}
