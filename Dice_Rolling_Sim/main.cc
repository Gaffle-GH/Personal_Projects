#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void diceSelection();
void diceDisplay(int roll);

int main(){
    srand(time(0));

    cout << "Dice Rolling Simulator: " << endl;
    cout << "Created by [V]" << endl;
    cout << endl;

    cout << "S: Start" << endl;
    cout << "Q: Quit" << endl;
    cout << endl;
    cout << "Selection: ";
    char option;
    cin >> option;
    option = toupper(option);

    switch(option){
        case 'S':
            diceSelection();
        case 'Q':
            exit(0);
    }
}

void diceSelection(){
    int roll;
    cout << "Select a Dice!" << endl;
    cout << endl;

    cout << "A. 6 - Sided" << endl;
    cout << "B. 10 - Sided" << endl;
    cout << "C. 20 - Sided" << endl;
    cout << endl;
    cout << "Q. Quit" << endl;
    cout << endl;
    cout << "Selection: ";
    char option;
    cin >> option;

    option = toupper(option);

    switch (option){
        case 'A':
            // Generates Number between 1 and 6
            roll = (rand() % 6) + 1; 
            diceDisplay(roll);
        case 'B':
            // Generates Number between 1 and 10
            roll = (rand() % 10) + 1;
            diceDisplay(roll);
            break;
        case 'C':
             // Generates Number between 1 and 20
            roll = (rand() % 20) + 1;
            diceDisplay(roll);
            break;
        case 'Q':
            exit(0);
    }
}
