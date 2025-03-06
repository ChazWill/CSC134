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
cout << "Enter a numerical grade (a number)" << endl;
cin >> numberGrade;

if (numberGrade >= 90)
{
    cout << "Grade A" << endl;
    cout << endl;
}
else if (numberGrade >= 80)
{
    cout << "Grade B" << endl;
    cout << endl;
}
else if (numberGrade >= 70)
{
    cout << "Grade C" << endl;
    cout << endl;
}
else if  (numberGrade >= 60)
{
    cout << "Grade D" << endl;
    cout << endl;
}
else 
{
    cout << "Grade F" << endl;
    cout << endl;
}

cout << "Would you like to enter another grade? (y/n): ";
cin >> anotherGrade;

}
while (anotherGrade == 'y' || anotherGrade == 'Y');  // Continue if 'y' or 'Y'

cout << "Thank you for using the grade converter!" << endl;
return 0;

}
