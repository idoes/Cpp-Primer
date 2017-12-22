#include <iostream>

int main(){
  int i = 1;
  int *p = &i;
  int *pp;
  pp = p;

  std::cout << *pp << std::endl;

  return 0;

}
