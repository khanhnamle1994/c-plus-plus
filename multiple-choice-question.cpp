// Title: Multiple Choice Question
// Concepts: switch, break
#include <iostream>
using namespace std;

int main() {
  char answer;
  cout << "Who is 007?\n"
      << "a. Homer Simpson\n"
      << "b. Donald Trump\n"
      << "c. Jason Bourne\n"
      << "d. James Bond\n"
      << "(type the correct letter and then press enter)\n";
  cin >> answer;
  switch (answer) {
    case 'a': cout << "Not right, but he would make an awesome secret agent.";
      break;
    case 'b': cout << "Not even close.";
      break;
    case 'c': cout << "Really close.";
      break;
    case 'd': cout << "Exactly.";
      break;
  }
  return 0;
}
