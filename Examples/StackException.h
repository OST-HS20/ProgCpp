#include <iostream>
#include <stdexcept>

class StackException : public std::runtime_error {
public:
    StackException(const char* ch) :
      runtime_error(ch) {}

    virtual ~StackException(){}
};

int main() {
  Stack<int, 10> stack;
  try {      
    stack.push();
  } catch(const StackException& e) { // Always use references! 
    std::cout << e.what() << std::endl;
  } catch (...) {
    // General exception
  }
}

