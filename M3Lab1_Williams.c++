/*
CSC 134
M3Lab1 - If statement 
Chazidy Williams
3-5-25
*/

#include <iostream>
using namespace std;

void chooseFuture();
void choosePast();

int main() {
    int choice; 

    cout << "Do you want to travel to the past or future?" << endl;
    cout << "Type 1 for future or 2 for past: "; 
    cin >> choice;

    if (1 == choice) {
        chooseFuture();
    }
    else if (2 == choice) {
        choosePast();
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    cout << "Thank you for playing!" << endl;
    cout << endl;
    return 0; 
}

void chooseFuture() {
    cout << "You chose the Future!" << endl;
    cout << "You landed in 2150, in a world where humanity has colonized space" << endl;
    cout << endl;;
}

void choosePast() {
    cout << "You chose the Past!" << endl;
    cout << "You landed in Ancient Egypt, during the construction of the pyramids." << endl;
    cout << endl;
}


