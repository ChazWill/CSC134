/*
CSC 134
M3T3 - crab game 
Chazidy Williams
2-26-25
*/

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 6; // yours will differ!
    //int seed = 19;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    roll2 = ( (rand() % SIDES)+1 );
    total = roll1 + roll2;

    cout << "You rolled " << roll1 << " + " << roll2 << " = " << total << endl;
    cout << endl;

    
    if (7 == total || 11 == total)
    {
        cout << "You win! {: " << endl;
        cout << endl;
    }
    else if ( 2 == total || 3 == total || 12 == total)
    {
        cout << "You lose :{ " << endl;
        cout << endl;
    }
    else
    {
        cout << "Your point is " << total << endl;
        cout << endl;
        
    }

    
}