// Title: Incorrect Answer
// Concepts: if-else, Comments
#include <iostream>
using namespace std;

int main()
{
  int userAnswer;
  int correctAnswer = 4;
  cout << "What is 2 + 2?";
  cin >> userAnswer;
  if (userAnswer == correctAnswer) {
    cout << "Correct Answer!\n";
  } else {
    cout << "Wrong Answer! 2 + 2 = 4 \n";
  }
  return 0;
}
