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
cout << "Enter a numerical grade (a number)" << endl;
cin >> numberGrade;

if (numberGrade >= 90)
{
    cout << "Grade A" << endl;
}
else if (numberGrade >= 80)
{
    cout << "Grade B" << endl;
}
else (numberGrade >= 70)
{
    cout << "Grade C" << endl;
}
else (numberGrade >= 60)
{
    cout << "Grade D" << endl;
}
else 
{
    cout << "Grade F" << endl;
}
return 0;

}
