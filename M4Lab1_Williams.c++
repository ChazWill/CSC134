/*
Williamc
3/17/2025
nested loops
*/
#include <iostream>
using namespace std;

int main(){
    string pattern = " 🦦🧬";
    const int WIDTH = 8;
    const int HEIGHT = 5;

    // print now
    cout << "column\n";
    int count = 0;
    for (int i = 0; i < WIDTH; i++)
    {
        cout << pattern; 
        count++;
    }

    // print height
    cout << "row\n";
    for (int i = 0; i < HEIGHT; i++)
    {
        cout << pattern << endl;
    }

    //print square
    // TODO: ask the user
    int width, height;
    cout << "Whats the width: ";
    cin >> width;
    cout << "Whats the height: ";
    cin >> height;

    cout << "Square of " << width << " by " << height << endl;
    for(int v=0; v<height; v++)
    {
        for(int h=0; h<width; h++)
        {
            cout << pattern;
        }

        cout << endl;
    }
}