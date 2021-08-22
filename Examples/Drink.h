#include <iostream>
#include <string>

using namespace std;

class Drink {
public:
  Drink() : name("Noname") {}
  Drink(const string& dName) : name(dName) {}

  virtual ~Drink() {}
  virtual void mix() const {}

private:
  string name;
};

class SweetDrink : public Drink {
public:
  SweetDrink(const string& name) {}
  void mix() const override {}
};

class AlcDrink : public Drink {
public:
  AlcDrink(const string& name, const int strengh) : Drink(name) {}
  virtual ~AlcDrink() {}
};

int main() {
    Drink* glass[6] = {0};
    glass[0] = new Drink;
    glass[1] = new Drink("Minearl");
    glass[2] = new SweetDrink("Apple");
    glass[3] = new AlcDrink("Beer", 4.7);
    glass[5] = new Drink("Milk");
} 
