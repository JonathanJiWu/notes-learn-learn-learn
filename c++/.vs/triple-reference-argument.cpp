#include <iostream>

//the argument need to be &i to be modified
int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  std::cout << triple(num) << "\n";//output 3
  std::cout << triple(num) << "\n";//output 9

}
