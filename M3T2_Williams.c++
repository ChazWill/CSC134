/*
CSC 134
M3T2 
Chazidy Williams
2-24-25
*/

#include <iostream>
// for random
#include <cmath>    
#include <ctime>
using namespace std;

int main() {
    const int SIDES = 6; 
    const int TO_HIT = 3;
    //int seed = 69;
    int seed = time(0);
    //cout << "The seed is: " << seed << endl;
    // seed the random number generator
    srand(seed);
    // rand() is a large number, so we take the remainder which is %
    int roll1, roll2, total;
    // roll a few times
    roll1 = ( (rand() % SIDES)+1 );
    //cout << roll1 << endl;

    roll2 = ( (rand() % SIDES)+1 );
    //cout << roll2 << endl;

    total = roll1 + roll2;
    cout << " Roll 1 was: " << roll1 << endl;
    cout << " Roll 2 was: " << roll2 << endl;
    cout << " Together they equal: " << total << endl << endl;

    if(total >= TO_HIT)
    {
        cout << "Yipeee u hit!!" << endl << endl;
    }
    else{
        cout << "Oh no!!!" << endl << endl;
    }
}