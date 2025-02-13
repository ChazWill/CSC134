/*
CSC 134
M2HW1 - Gold
Chazidy Williams
2-12-25
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    // Question 1
    string name;
    double startingBalance, amountDeposit, amountWithdrawl, finalBalance;
    int accountNumber;

    cout << "Enter full name: ";
    getline(cin, name);
    cout << "Enter starting balance: " << endl;
    cin >> startingBalance;
    cout << "Enter amount desposit: " << endl;
    cin >> amountDeposit;
    cout << "Enter amount withdrawls: " << endl;
    cin >> amountWithdrawl;

    srand(time(0));  // Seed the random number generator
    accountNumber = rand() % 90000 + 10000;  // Generates a 5-digit number

    finalBalance = startingBalance + amountDeposit - amountWithdrawl;

    cout << fixed << setprecision(2);
    cout << "\nAccount Summary:\n";
    cout << "Name on Account: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Final Balance: $" << finalBalance << endl;
    cout << endl;

    return(0);

}