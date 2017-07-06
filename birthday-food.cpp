// Title: Favorite Birthday Food
// Concepts: srand, rand, %, <time.h>, time(NULL)
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));
  string favoriteFood;
  cout << "What is your favorite food?";
  getline(cin, favoriteFood);
  cout << "I will give you " << rand() % 10 + 1 <<  " " << favoriteFood << " for your birthday!\n";
  return 0;
}
