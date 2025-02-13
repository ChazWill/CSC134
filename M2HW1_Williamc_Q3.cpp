/*
CSC 134
M2HW1 - Gold
Chazidy Williams
2-12-25
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // variables
    int pizzasOrdered, slicesPerPizza, numVisitors;
    int totalSlices, slicesNeeded, leftoverSlices;


    cout << "How many pizzas do you want to order: ";
    cin >> pizzasOrdered;
    cout << "How many slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "How many vistors are coming: ";
    cin >> numVisitors;

    totalSlices = pizzasOrdered * slicesPerPizza;
    slicesNeeded = numVisitors * 3;
    leftoverSlices = totalSlices - slicesNeeded;

    cout << "\nTotal slices available: " << totalSlices << endl;
    cout << "Total slices needed: " << slicesNeeded << endl;
    cout << "Leftover slices: " << leftoverSlices << endl;
    cout << endl;

    return 0;
}
