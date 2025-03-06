/*
CSC 134
M3Lab2 - Number Grade to Letter Grade Conversion Program
Chazidy Williams
3-5-25
*/

#include <iostream>
using namespace std;

int main() {
int numberGrade;
char anotherGrade;

do 
{
cout << "Enter Your numerical grade: " << endl;
cin >> numberGrade;

if (numberGrade >= 90)
{
    cout << "Your letter grade is: A" << endl;
    cout << endl;
}
else if (numberGrade >= 80)
{
    cout << "Your letter grade is: B" << endl;
    cout << endl;
}
else if (numberGrade >= 70)
{
    cout << "Your letter grade is: C" << endl;
    cout << endl;
}
else if  (numberGrade >= 60)
{
    cout << "Your letter grade is: D" << endl;
    cout << endl;
}
else 
{
    cout << "Your letter grade is: F" << endl;
    cout << endl;
}

cout << "Would you like to enter another grade? (y/n): ";
cin >> anotherGrade;

}
while (anotherGrade == 'y' || anotherGrade == 'Y');  // Continue if 'y' or 'Y'

cout << "Thank you for using the grade converter!" << endl;
return 0;

}
