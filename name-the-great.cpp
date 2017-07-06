#include <iostream>
#include <string>
int main() {
  std::string name;
  std::cout << "What is your name?\n";
  getline(std::cin, name);
  std::cout << "Nice to meet you, " << name << "!\n"
            << "Your name has " << name.length() << " letters.\n"
            << "Your name starts with the letter " << name.front() << ".\n"
            << "Your name ends with the letter " << name.back() << ".\n";
  name.append(" the Great");
  std::cout << "Your name is now " << name << ".";

  std::cin.ignore();
  return 0;
}
