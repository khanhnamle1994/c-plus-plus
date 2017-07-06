// Title: Old Enough to Vote
// Concepts: elseif <, >
#include <iostream>
using namespace std;

int main()
{
  int userAge;
  int votingAge = 18; // Voting age in the USA
  cout << "What is your age?";
  cin >> userAge;
  if (userAge == votingAge) {
    cout << "Yay! You finally get to vote.\n";
  } else if(userAge < votingAge) {
    cout << "Then you are too young to vote!\n";
  } else {
    cout << "Then you are old enough to vote!";
  }
  return 0;
}
