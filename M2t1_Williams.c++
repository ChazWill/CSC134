// CSC 134
// M2T1
// Chazidy Williams
// 1-29-25
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //variables
    string farm_name = "Chazs";
    int num_grapes = 100;
    double price_each = 0.25;
    string customer_name;
    int grapes_to_buy;

    // welcome
    cout << "Hi, whats your name? " << endl;
    cin >> customer_name;
    cout << "Nice to meet you, " << customer_name << endl;

    cout <<"Welcome to the " << farm_name << " Grape farm." << endl;
    cout << "We have " << num_grapes << " Grapes in stock." << endl;
    cout << "Price per Grape is: $" << price_each << endl;
    cout << endl;
   

    //Print answer
    cout << "The total for all " << num_grapes <<" is $" << total << endl;
    cout << endl;

    //calculations
    double total = num_grapes * price_each;
    cout << "How many grapes do you want? ";
    cin >> grapes_to_buy;
    double customer_cost = grapes_to_buy * price_each;
    cout << "For " << grapes_to_buy << " your total is $" << customer_cost << endl;
    cout << endl;


    return 0;
}