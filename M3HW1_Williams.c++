// CSC 134
// M3HW1 - Gold
// Chazidy Williams
// 3-11-25

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

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

    // Set up
    string store_name = "Chaz's Cheesecake Factory"; 
    double food_price;
    double tip_percent = 0.15, tax_percent = 0.08;
    double tip_amount = 0, tax_amount, subtotal, total;
    int dine_choice;

    // Greeting
    cout << "Welcome to " << store_name << "!" << endl;
    cout << "Enter the price of your meal: $";
    cin >> food_price;
    
    // Asking dine-in or takeaway
    cout << "Enter 1 for dine-in, 2 for takeaway: ";
    cin >> dine_choice;

    // Calculations
    if (dine_choice == 1) {
        tip_amount = food_price * tip_percent;  // 15% tip for dine-in
    } 
    
    subtotal = food_price + tip_amount;
    tax_amount = subtotal * tax_percent;
    total = subtotal + tax_amount;

    // Print formatted receipt
    cout << "\n========== RECEIPT ==========\n";
    cout << fixed << setprecision(2);
    cout << setw(15) << "Meal Price: " << "$" << setw(6) << food_price << endl;
    cout << setw(15) << "Tip (15%): " << "$" << setw(6) << tip_amount << endl;
    cout << setw(15) << "Tax (8%): " << "$" << setw(6) << tax_amount << endl;
    cout << setw(15) << "Total Due: " << "$" << setw(6) << total << endl;
    cout << "=============================\n";

    // Goodbye
    cout << "Thank you for dining at " << store_name << "!" << endl;
    cout << "We would love to hear about your visit!\n";
    cout << "Contact us at ChazCheesecake@gmail.com\n";

// Question 3
cout << "Question 3" << endl;

    cout << "Welcome to the Haunted Forest Adventure!" << endl;
    cout << "You find yourself lost in a dark forest. There are two paths ahead." << endl;
    cout << "Do you: (1) Take the narrow, winding path or (2) Follow the wider, well-trodden road? ";
    
    int choice1;
    cin >> choice1;

    if (choice1 == 1) { 
        // Path 1: Leads to another decision
        cout << "\nYou cautiously step onto the narrow path, hearing eerie whispers in the wind." << endl;
        cout << "A shadowy figure appears in the distance. Do you: " << endl;
        cout << "(1) Run towards it for help OR (2) Hide behind a tree and observe? ";
        
        int choice2;
        cin >> choice2;

        if (choice2 == 1) { 
            // BAD ENDING
            cout << "\nThe figure turns out to be a vengeful ghost! It engulfs you in darkness..." << endl;
            cout << "GAME OVER! You became part of the haunted forest forever. 👻" << endl;
        } else if (choice2 == 2) { 
            // GOOD ENDING
            cout << "\nYou stay hidden and watch as the ghost vanishes into the night." << endl;
            cout << "You find a hidden path leading out of the forest. You survived!" << endl;
            cout << "CONGRATULATIONS! 🎉 You win!" << endl;
        } else {
            cout << "Invalid choice. The spirits are displeased. GAME OVER. 👀" << endl;
        }
        
    } else if (choice1 == 2) { 
        // Path 2: Immediate defeat
        cout << "\nYou confidently walk down the wider road... but it's a trap!" << endl;
        cout << "The ground collapses beneath you, and you fall into an endless pit." << endl;
        cout << "GAME OVER! Better luck next time. 😵" << endl;
    } else {
        cout << "Invalid choice. You hesitate for too long, and the darkness consumes you. GAME OVER. 👀" << endl;
    }
    
// Question 4
cout << "Question 4" << endl;
    // Seed the random number generator
    srand(time(0));

    // Generate two random single-digit numbers (1-9)
    int num1 = (rand() % 9) + 1;
    int num2 = (rand() % 9) + 1;
    int user_answer, correct_answer;

    // Calculate the correct answer
    correct_answer = num1 + num2;

    // Display the problem
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;

    // Get user input
    cin >> user_answer;

    // Check if the answer is correct
    if (user_answer == correct_answer) {
        cout << "Correct! " << endl;
    } else {
        cout << "Incorrect. The correct answer is " << correct_answer << "." << endl;
    }


    return 0;
}

