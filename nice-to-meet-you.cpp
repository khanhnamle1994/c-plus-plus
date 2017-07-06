#include <iostream>
#include <string>
int main() {
  std::string name;
  std::cout << "What is your name?\n";
  getline(std::cin, name);
  std::cout << "Nice to meet you, ";
  std::cout << name;
  std::cout << "!";
  std::cin.ignore();
  return 0;
}
