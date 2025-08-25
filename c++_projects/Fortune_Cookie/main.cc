#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void menuDisplay();
void selection(char option);
void fortuneCookie();

int main(){
    menuDisplay();
    return 0;
}

void menuBlank(){cout << "\033[2J\033[1;1H";}
 
void menuDisplay(){
    char option;
    menuBlank();

    cout << "Fortune Cookie: " << endl;
    cout << "Made by [V]" << endl;
    cout << endl;
    cout << "Select an option:" << endl;
    cout << "S - Show Fortune" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Selection: ";

    cin >> option;

    option = toupper(option);
    return selection(option);
}

void selection(char option){
    menuBlank();
    switch(option){
        case 'S': 
            menuBlank();
            fortuneCookie();;
        case 'Q': 
            exit(0);
    }
}

void fortuneCookie(){
    srand(time(0));
    int roll = rand() % 9;
    int rollnum = roll + 1;
    int count = 0;

    string fortunes[] = {
        // 1
        "A beautiful, smart, and loving person will enter your life.", 
        // 2
        "You will soon embark on a journey that will change your perspective.", 
        // 3
        "Good news of a financial nature will soon come your way.", 
        // 4
        "The best way to predict the future is to create it.", 
        // 5
        "An unexpected opportunity will lead to great success.",
        // 6
        "Your kindness will be rewarded in an unexpected way.",
        // 7
        "Patience is a virtue that will soon bring you immense satisfaction.",
        // 8
        "A new friendship will blossom from a chance encounter.",
        // 9
        "Believe in yourself and all that you are.",
        // 10
        "Your creativity will lead you to new and exciting adventures.",
    };

    for(long long unsigned int i = 0; i < sizeof(fortunes)/sizeof(fortunes[0]); i++){
        count++;
    }

    // Display Output
    cout << "Fortune: " << fortunes[roll] << endl;
    cout << "Fortune " << rollnum << " of " << count << " fortunes displayed." << endl;
    cout << endl;

    // Recursive call to reroll or exit
    cout << "Reroll? (Y/N): ";
    char reroll;
    cin >> reroll;
    reroll = toupper(reroll);
    switch(reroll){
        case 'Y':
            menuBlank();
            fortuneCookie();
            break;
        case 'N':
            menuBlank();
            cout << "Closing.." << endl;
            exit(0);
        default:
            cout << "Error: Invalid Option" << endl;
            break;
    }
}