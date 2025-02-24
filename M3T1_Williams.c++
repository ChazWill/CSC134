// CSC 134
// M3T1 - Choices
// WilliamsC
// 2/24/2025

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  // declare the variable we need
  int choice; 

  const int WALK = 1;
  const int SWIM = 2;
  const int RUN = 3;

  // ask the question
  cout << "You woke up in a empty room and see three doors" << endl;
  cout << "Door 1. walk" << endl;
  cout << "Door 2. swim "   << endl;
  cout << "Door 3. run" << endl;
  cout << "Type 1,2, or 3: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (WALK == choice) {
  	cout << "You chose to walk through a web of spiders" << endl;
    cout << "Sadly, you lose. 😕 " << endl;
  }
  else if (SWIM == choice) {
  	cout << "You chose to swim with the fish" << endl;
    cout << "You live to fight another day. 😊" << endl;
  }
  else if (RUN == choice) {
    cout << "You have 10 seconds to start running from a hippo" << endl;
    cout << "Good luck!!" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error
} // end of the main() method