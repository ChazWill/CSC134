/*
CSC-134-5H01
Chazidy Williams
3/24/25
M5T1 - basic functions
*/
#include <iostream>
using namespace std;
//First Ver -- Just call a few functions

//Function Declarations(first line only)
void say_hi(); // A function that prints "Hi!" (does not return anything).
int add(int first, int second); // A function that takes two integers, adds them, and returns the sum.
void print_number(int num); //A function that takes an integer and prints it.
int global_x = 999; //global variable


int main ()
{
    //example of local variables
    int my_num = 12;
    cout << "in main(), my_num = " << my_num << endl; // Prints the value of my_num (which is 12
    cout << "in main(), global_x = " << global_x << endl; // Prints the global variable global_x (which is 999).
    say_hi(); // Calls the say_hi function.
    cout << "2 + 2 = "; 
    int num = add(2, 2); // Calls the add() function, passing in 2 and 2. The function returns 4, which is stored in num.
    print_number(num); // Calls print_number(), passing in num (which is 4). This prints 4 to the screen.

    return 0; //optional, when not there assume there's one
}

//Function definitions (full thing)

//Void function -- just call it, no return
void say_hi() 
{
    cout << "Hi!\n";
    int my_num = 69; // also local
    cout << "in say_hi(), my_num = " << my_num << endl; 
    cout << "in say_hi(), global_x = " << global_x << endl;
}

//Value returning function
int add(int first, int second)
{
    int answer = first + second;
    return answer;
}

//Void function but takes a value(parameter)
void print_number(int num)
{
    cout << num << endl;
}