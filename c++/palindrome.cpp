#include <iostream>
#include <string>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string reversed_string = "";
  for(int i = text.size()-1; i>=0; i--){
    // std::cout<<i;
    reversed_string = reversed_string + text[i];
    // std::cout<<reversed_string;
  }

  if(reversed_string == text){
    return true;
  }else{
    return false;
  }

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}