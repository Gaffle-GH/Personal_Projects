#include "level.h"

// 10 QUESTIONS
void GAME::play10easy(){
    num_questions = 10;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " Game" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Easy" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play10easy();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 10, num_difficulty = 1);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

void GAME::play10medium(){
    num_questions = 10;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " Game" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Medium" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play10easy();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 10, num_difficulty = 2);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

void GAME::play10hard(){
    num_questions = 10;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " Game" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Hard" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play10easy();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 10, num_difficulty = 3);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

// 20 QUESTIONS
void GAME::play20easy(){
    num_questions = 20;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " GAME" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Easy" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play20easy();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 20, num_difficulty = 1);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

void GAME::play20medium(){
    num_questions = 20;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " GAME" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Medium" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play20medium();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 20, num_difficulty = 2);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

void GAME::play20hard(){
    num_questions = 20;
    cout << color(BOLD) << color(MAGENTA) << "Confirm" << color(WHITE) << " GAME" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Hard" << color(RESET) << endl << endl;

    cout << color(MAGENTA) << "1" << color(WHITE) << ". Confirm" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    int option;
    cin >> option;

    if(option < 1 || option > 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play20medium();
    }else if(option == 1){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::gameMATCH(num_questions = 20, num_difficulty = 3);
    }else if(option == 2){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }
}

