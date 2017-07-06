#include <iostream>
using namespace std;
int main() {
  int firstnumber;
  int secondnumber;

  cout << "Give me a number: ";
  cin >> firstnumber;
  cout << "Give me a second number: ";
  cin >> secondnumber;

  cout << "The sum of the two numbers: " << firstnumber + secondnumber << endl;
  cout << "The difference of the two numbers: " << firstnumber - secondnumber << endl;
  cout << "The product of the two numbers: " << firstnumber * secondnumber << endl;
  cout << "The quotient of the two numbers: " << firstnumber / secondnumber << endl;
  cout << "with a remainder of: " << firstnumber % secondnumber << endl;
  return 0;
}
