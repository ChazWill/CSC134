// CSC 134
// M1Lab1 - apple sales
// Chazidy Williams
// 1-27-25
// Today we're selling apples
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    string name = "chazs";
    int num_apples = 100;
    double price_each = 0.25;

    //calculations
    double total = num_apples * price_each;


    // welcome
    cout <<"Welcome to the " << name << " apple farm." << endl;
    cout << "We have " << num_apples << " apples in stock." << endl;
    cout << "Price per apple is: $" << price_each << endl;
    cout << endl;
   

    //Print answer
    cout << "The total answer " << num_apples<<" Apples is $" << total; << endl;
    return 0;
}