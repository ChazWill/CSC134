// CSC 134
// M3HW1 - Gold
// Chazidy Williams
// 3-11-25

#include <iostream>
using namespace std;

int main(){

// Question 1
string choice; 

cout << "Question 1" << endl;

cout << "Hello, I’m a C++ program!" << endl;
cout << "Do you like me? Please type yes or no. " << endl;
cin >> choice;
if (choice == "yes"){
    cout << "That’s great! I’m sure we’ll get along. " << endl;
}
else if (choice == "no"){
    cout << "Well, maybe you’ll learn to like me later. " << endl;
}
else{
    cout << "If you’re not sure… that’s OK. " << endl;
}

// Question 2

cout << "Question 2" << endl;
//Set up
string store_name = "Chaz's cheesecake factory"; 
int food_price;
double tip = 0.15;
int dine_place;

// Recept variable
double subtotal, total;
double tax_percent, tax_cost;

// Greeting
cout << "Welcome to the restaurant! " << store_name << " store!"<< endl;
cout << "How much is your meal ";
cin >> food_price;
cout << "Please enter 1 if the order is dine in, 2 if it is to go " << endl;
cin >> dine_place;
if (dine_place == 1){
    tax_percent = 0.08; //assignment says 8%
    subtotal = food_price  + (food_price * tip);
    tax_cost = subtotal * tax_percent; // 8% of 21.77
    total   = subtotal + tax_cost;
}
else if (dine_place == 2){
    tax_percent = 0.08; //assignment says 8%
    subtotal = food_price;
    tax_cost = subtotal * tax_percent; // 8% of 21.77
    total   = subtotal + tax_cost;
}

// print
// Print Receipt
cout << fixed << setprecision(2);
cout << setw(15) << "Subtotal:\t$" << setw(6) << subtotal << endl;
cout << setw(15) << "Tax (8%):\t$" << setw(6) << tax_cost << endl;
cout << setw(15) << "Total:\t$" << setw(6) << total << endl;

// Goodbye
cout << "Have a nice day!" << endl;
cout << "We would love to hear about your vist!!!" << endl;
cout << "Contact us at Chazcheesecake@gmail.com" << endl;
cout << endl;
return 0;






// Question 4
cout << "Question 3" << endl;
// Question 4 code goes here

// Question 4
cout << "Question 4" << endl;
// Question 4 code goes here

return 0;
}