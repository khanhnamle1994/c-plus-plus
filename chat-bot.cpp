#include <iostream>
#include <string>

int main() {
  std::string name;
  std::string age;
  std::string favorite_food;
  std::string pets2;

  std::cout << "What is your name?\n";
  getline(std::cin, name);
  std::cout << "Nice to meet you, " << name << "!\n";

  std::cout << "How old are you?\n";
  getline(std::cin, age);
  std::cout << "Cool, I am " << age << " too!\n";

  std::cout << "What is your favorite food?\n";
  getline(std::cin, favorite_food);
  std::cout << "Gross, I cannot stand " << favorite_food << "!\n";

  std::cout << "I have two cats. How about you?\n";
  getline(std::cin, pets2);
  std::cout << "Awesome. Anyway I have got to go. Talk to you later.\n";

  std::cin.ignore();
  return 0;
}
