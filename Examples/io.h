#include <iostream>

using namespace std;

const double pi = 3.1314f;

int main(void) {
  double radius;

  cout << "Radius: ";
  cin >> radius;

  cout << "Flaeche " << pi * radius * radius << endl;

  return 0;
}