// Name: Daniella
// Partner(s) names: Nick, Celeste 
// Class: CIS6
// File: menu.cpp
//
// A program to display a menu and ask for a selection from the user. 
// Your task is to rewrite it to use FUNCTIONS and CONSTANTS: try to make your
// main function into the "table of contents" for your program, and avoid using
// "magic numbers" -- define constants with explanatory names to replace
// numbers given directly in your code. 
//
// By the time you turn in your assignment, there should be no "magic numbers"
// in your program -- replace numbers within your code (other than numbers in
// strings shown to the user) with properly-named constants.
//
// Please work in pairs or teams of three, but also please have everyone upload
// a complete copy of the code (upload the cpp file you worked in to canvas).
// Please give the names of your partner or partners. Name your file "menu.cpp" 
//
// Note: there is no "right answer" for this assignment. The point is to think
// about what the best way to break this program up into functions might be,
// and then to actually implement that version of the program. 
//
// It may be helpful to spend some time writing down on paper what the
// different functions you might define could be (in the planning stage, you
// don't have to write valid code).
//
// If you have time: Have the program prompt the user again if they enter an
// invalid choice. 

#include <iostream>
#include <iomanip>

using namespace std;

const int ADULT_PRICE = 40;
const int CHILD_SENIOR_PRICE = 30;

int get_input(){
    int choice = 0;
    
    cout << "\t\tHealth Club Membership Menu" << endl << endl
        << "1. Standard adult membership" << endl
        << "2. Child membership " << endl
        << "3. Senior membership " << endl
        << "4. Quit the program" << endl << endl;
    cin >> choice;
    return choice;
}

int print_charges(int choice){
    int months;   // number of months of the user's membership
    double charges;     // to hold total charges.

    if (choice == 1){
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT_PRICE;
        cout << "The total charges are $" << charges << endl;
    } else if (choice == 2 || choice == 3){
        cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD_SENIOR_PRICE;
        cout << "The total charges are $" << charges << endl;
    } else if (choice == 4){
        cout << "Program ending." << endl;
    } else {
        cout << "The valid choices are 1 through 4. Run the program " 
            << "again and select one of those choices." << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        return 1;
    }
    return 0;
}

int main(){
    int choice;  // holds a menu choice
    int error = 1;

    while (error != 0){
        choice = get_input();
        // sets the formatting -- you do NOT have to replace the number on
        // this line. vvvvv
        cout << fixed << showpoint << setprecision(2);  
        error = print_charges(choice);
    }
    return 0;
}
