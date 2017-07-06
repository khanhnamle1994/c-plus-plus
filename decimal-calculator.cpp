#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double firstnumber;
  double secondnumber;

  cout << setprecision(2) << fixed;
  cout << "Give me a number: ";
  cin >> firstnumber;
  cout << "Give me a second number: ";
  cin >> secondnumber;

  cout << firstnumber << " + " << secondnumber << " = " << firstnumber + secondnumber << endl;
  cout << "The difference of the two numbers: " << firstnumber - secondnumber << endl;
  cout << "The product of the two numbers: " << firstnumber * secondnumber << endl;
  cout << "The quotient of the two numbers: " << firstnumber / secondnumber << endl;

  return 0;
}
