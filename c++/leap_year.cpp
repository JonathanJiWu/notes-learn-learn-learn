#include <iostream>

int main() {
  std::cout << "put in year\n";

  int year;

  std::cin >> year;

  if(year % 4 == 0){
    if(year % 100 ==0 && year%400 != 0){
      std::cout << "NOT";
    }else{
      std::cout << "YES";
    }
}else{
      std::cout << "NOT";
    }