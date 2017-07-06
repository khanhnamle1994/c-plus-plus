// Title: Cake?
// Concepts: char, yes or no.
#include <iostream>
using namespace std;

int main() {
  char answer;
  cout << "Would you like some cake? (type y for yes or n for no)\n";
  cin >> answer;
  if (answer == 'y') {
    int number;
    cout << "How many pieces of cake would you like?\n";
    cin >> number;
    cout << "Here is " << number << " pieces of cake!";
  } else {
    cout << "Why are you in my cake shop?";
  }
  return 0;
}
