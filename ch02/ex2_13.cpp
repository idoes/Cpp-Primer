#include <iostream>

int i = 50;
int main(){
  int i = 100;
  std::cout << "the main()'s i: " << i << std::endl;
  std::cout << "the global scope' i: " << ::i << std::endl;
  return 0;
}

