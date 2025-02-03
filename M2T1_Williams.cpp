 //CSC134
 // M2T2
 // Chazidy 
 // 2/3/25

#include <iostream>
#include <iomanip>
using namespace std;
  
int main()
{
   //Set up
   string store_name = "Chaz's cheesecake factory";
   string food_name = "cheesecake";
   double food_price = 8.77; // $
   int how_many;
   double tip;

   // Recept variable
   double subtotal, total;
   double tax_percent, tax_cost;

   // Greeting
   cout << "Welcome to the restaurant! " << store_name << " store!"<< endl;
   cout << "You ordered one " << food_name << " and it's $" << food_price << " each."<< endl;
   cout << "How many do you want to get? ";
   cin >> how_many;
   cout << "You got " << how_many <<" "<< food_name << "(s)." << endl;
   cout << "Add a tip? $";
   cin >> tip;

   // Calculate subtotal, tax, total
   tax_percent = 0.08; //assignment says 8%
   subtotal = food_price * how_many * tip;
   tax_cost = subtotal * tax_percent; // 8% of 21.77
   total   = subtotal + tax_cost;

   // print
   cout << setw(10) << setprecision(2)<<fixed; // sets number to 2 places
   cout << setw(10) << "Subtotal:\t$" << setw(6) << subtotal << endl;
   cout << setw(10) << "Tax (8%):\t$" << setw(6) << tax_cost << endl;
   cout << setw(10) << "Total:\t$" << setw(6) << total << endl;

   // Goodbye
   cout << "Have a nice day!" << endl;
   cout << "We would love to hear about your vist!!!" << endl;
   cout << "Contact us at Chazcheesecake@gmail.com" << endl;
   cout << endl;
   return 0;

}