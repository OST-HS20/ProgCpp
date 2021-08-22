#include <cstddef>
#include <stdexcept>

#include "StackException.h"

template<typename T, size_t SIZE>
class Stack {
public:
  Stack(std::size_t theSize = SIZE) :
    elems(new T[theSize]), 
    top(0), size(theSize) { }
  
  ~Stack() {
    delete[] elems;
  }
  
  void push(T e) {
    if (top == size) throw new StackException("Top of stack reached!");
  
    elems[top] = e;
    ++top;
  }
  
  T pop() {
    if (top == 0) throw new StackException("Stack empty");
  
    --top;
    return elems[top];
  }

private:
  T* elems;        
  std::size_t top;      
  std::size_t size;  
};


int main() {
  Stack<int, 10> s;
  s.push(4);
}
