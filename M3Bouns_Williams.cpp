// CSC 134
// M3Bouns - Dnd game
// WilliamsC
// 3/3/2025

#include <iostream>
#include <cmath>    
#include <ctime>
using namespace std;

// Global variables for character stats
int strength, dexterity, constitution, intelligence, wisdom, charisma;
string name, char_class;
int level,hp;


// Function prototypes (declarations)
void inputStats();
void displayCharacter();
void saveCharacter();
int rolldice();
int rollstat();

int main() {
    srand(time(0));
    cout << "Character creation" << endl;
    inputStats();
    displayCharacter();
    cout << "Type 'a' to accept or, 'r' to reroll." << endl;
    char choice;
    cin >> choice;
    while (choice == 'r'){
        inputStats();
        displayCharacter();
        cout << "Type 'a' to accept, 'r' to reroll" << endl;
        cout << endl;
        cin >> choice;
    }
    return 0;
}

// Function defition (the full version)
void inputStats() {
    cout << "Rolling your character... " << endl;
    strength = rollstat();
    dexterity = rollstat();
    constitution = rollstat();
    intelligence = rollstat();
    wisdom = rollstat();;
    charisma = rollstat();

}

void displayCharacter() {
    cout << "\nCharacter Stats:\n";
    cout << "Strength: " << strength << endl;
    cout << "Dexterity: " << dexterity << endl;
    cout << "Constitution: " << constitution << endl;
    cout << "Intelligence: " << intelligence << endl;
    cout << "Wisdom: " << wisdom << endl;
    cout << "Charisma: " << charisma << endl;
}

void saveCharacter(){

}
int rolldice() {
return rand() % 6 + 1;
}
int rollstat() {
    // roll stat
    int stat;
    stat = rolldice() + rolldice() + rolldice();
    return stat;
}