#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "functions.cc"
#include "colors.h"
#include "loading.h"
#include "level.h"

using namespace std;

GAME::GAME(string name, int score) : name(name), score(score){}

void GAME::clearscreen(){
    cout << "\033[2J\033[1;1H";
}

// Game Title
void GAME::titledisplay(){
    cout << endl;
    cout << " " << color(MAGENTA) << "oooooo   oooooo     oooo                                     " << color(RESET) << "ooo        ooooo              .   oooo          " << endl; 
    cout << "  " << color(MAGENTA) << "`888.    `888.     .8'                                      " << color(RESET) << "`88.       .888'            .o8   `888          " << endl; 
    cout << "   " << color(MAGENTA) << "`888.   .8888.   .8' .ooooo.  oooo d8b  ooo. .oo.  .oo.    " << color(RESET) << " 888b     d'888   .oooo.  .o888oo  888 .oo.     " << endl; 
    cout << "    " << color(MAGENTA) << "`888  .8'`888. .8' d88' `88b `888""8P   `888P'Y88bP'Y88b    " << color(RESET) << " 8 Y88. .P  888  `P  )88b   888    888P'Y88b  " << endl;
    cout << "     " << color(MAGENTA) << "`888.8'  `888.8'  888   888  888      888   888   888    " << color(RESET) << " 8  `888'   888   .oP'888   888    888   888    " << endl; 
    cout << "      " << color(MAGENTA) << "`888'    `888'   888   888  888      888   888   888    " << color(RESET) << " 8    Y     888  d8(  888   888 .  888   888    " << endl;
    cout << "       " << color(MAGENTA) << "`8'      `8'    `Y8bod8P' d888b    o888o o888o o888o   " << color(RESET) << "o8o        o888o `Y888''8o  '888' o888o o888o   " << endl << endl << endl;

    cout << color(WHITE) << "Version" << color(WHITE) << ": ";
    cout << color(MAGENTA) << "v0.1" << color(RESET) << endl;

    cout << "__  __  __   __   __   __   __   __   __   __   __  __  __   __   __   __   __   __   __   __   __  __  __   __" << endl << endl;
}

// Game Options (Title Options)
void GAME::option(){
    int option;

    cout << color(BOLD) << color(MAGENTA) << "Game" << color(WHITE) << " Options" << color(RESET) << endl << endl;
    cout << color(MAGENTA) << "1" << color(WHITE) << ". Instructions" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Start Game" << endl;
    cout << color(MAGENTA) << "3" << color(WHITE) << ". Credits" << endl;
    cout << color(MAGENTA) << "4" << color(WHITE) << ". Exit" << endl;

    cout << endl << color(WHITE) << "Select an option: " << color(RESET);
    cin >> option;

    if(option < 1 || option > 4){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }else if(option == 1){
        GAME::instructions();
    }else if(option == 2){
        GAME::startgame();
    }else if(option == 3){
        GAME::credits();
    }else if(option == 4){
        exit(0);
    }
}

void GAME::instructions(){
    GAME::clearscreen();
    GAME::titledisplay();
    cout << color(BOLD) << color(MAGENTA) << "Instructions" << color(RESET) << endl << endl;

    cout << "Worm Math is a simple game where you answer questions to get the worm to the plant!" << endl << endl;

    cout << "You will be given a set number of questions to answer." << endl;
    cout << "When you answer a question correctly, the worm will move closer to the plant." << endl;
    cout << "When you answer a question incorrectly, the worm will move away from the plant." << endl;
    cout << "The goal is to get the worm to the plant with the best score at the end!" << endl;

    cout << endl << color(WHITE) << "Press" << color(BOLD) << " [Enter] " << color(RESET) << "to Return." << color(RESET);
    cin.ignore();
    cin.get();

    GAME::clearscreen();
    GAME::titledisplay();
    GAME::option();
}

void GAME::credits(){
    GAME::clearscreen();
    GAME::titledisplay();
    cout << color(BOLD) << color(MAGENTA) << "Credits" << color(RESET) << endl << endl;

    cout << color(BOLD) << color(MAGENTA) << "Game"  << color(RESET) << color(WHITE) << ": Worm Math" << endl;
    cout << color(BOLD) << color(MAGENTA) << "Game Designed On"  << color(RESET) << color(WHITE) << ": APR/14/2025" << endl;
    cout << color(BOLD) << color(MAGENTA) << "Game Designer/Programmer" << color(RESET) << color(WHITE) << ": Gaffle (V)" << endl;

    cout << color(BOLD) << color(MAGENTA) << "Github"  << color(RESET) << color(WHITE) << ": " << endl;

    cout << endl << color(WHITE) << "Press" << color(BOLD) << " [Enter] " << color(RESET) << "to Return." << color(RESET);

    cin.ignore();
    cin.get();
    GAME::clearscreen();
    GAME::titledisplay();
    GAME::option();
}

// Game Start
void GAME::startgame(){
    GAME::clearscreen();
    GAME::titledisplay();
    int option;

    cout << color(BOLD) << color(MAGENTA) << "Select " << color(WHITE) << "Question Count: " << color(RESET) << endl << endl;
    cout << color(MAGENTA) << "1" << color(WHITE) << ".  10 Questions" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ".  20 Questions" << endl;
    cout << color(MAGENTA) << "3" << color(WHITE) << ".  30 Questions" << endl; 
    cout << color(MAGENTA) << "4" << color(WHITE) << ".  40 Questions" << endl;
    cout << color(MAGENTA) << "5" << color(WHITE) << ".  50 Questions" << endl;
    cout << color(MAGENTA) << "6" << color(WHITE) << ".  60 Questions" << endl;
    cout << color(MAGENTA) << "7" << color(WHITE) << ".  70 Questions" << endl;
    cout << color(MAGENTA) << "8" << color(WHITE) << ".  80 Questions" << endl;
    cout << color(MAGENTA) << "9" << color(WHITE) << ".  90 Questions" << endl;
    cout << endl;
    cout << color(MAGENTA) << "0" << color(WHITE) << ".  Back to Main Menu" << endl << endl;

    cout << color(WHITE) << "Select an option: " << color(RESET);
    cin >> option;
    if(option < -1 || option > 9){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::startgame();
    }else if(option == 0){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::option();
    }else if(option == 1){
        GAME::play10();
    }else if(option == 2){
        // GAME::play20();
    }else if(option == 3){
        // GAME::play30();
    }else if(option == 4){
        // GAME::play40();
    }else if(option == 5){
        // GAME::play50();
    }else if(option == 6){
        // GAME::play60();
    }else if(option == 7){
        // GAME::play70();
    }else if(option == 8){
        // GAME::play80();
    }else if(option == 9){
        // GAME::play90();
    }
}

// Game Options (Questions & Settings)
void GAME::play10(){
    int option;
    GAME::clearscreen();
    GAME::titledisplay();
    cout << color(BOLD) << color(MAGENTA) << "10" << color(WHITE) << " Questions" << color(RESET) << endl << endl;
    cout << "Select Difficulty Level: " << endl;
    cout << color(MAGENTA) << "1" << color(WHITE) << ". Easy" << endl;
    cout << color(MAGENTA) << "2" << color(WHITE) << ". Medium" << endl;
    cout << color(MAGENTA) << "3" << color(WHITE) << ". Hard" << endl;
    cout << color(MAGENTA) << "4" << color(WHITE) << ". Back" << endl << endl;

    cout << color(WHITE) << "Select an option: " << color(RESET);

    cin >> option;

    if(option < 1 || option > 4){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play10();
    }else if(option == 1){
        cout << "Easy" << endl;
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::play10easy();
    }else if(option == 2){
        cout << "Medium" << endl;
        GAME::clearscreen();
        GAME::titledisplay();
        // GAME::play10medium();
    }else if(option == 3){
        cout << "Hard" << endl;
        GAME::clearscreen();
        GAME::titledisplay();
        // GAME::play10hard();
    }else if(option == 4){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::startgame();
    }
}

// Game Over (Reset )
void GAME::reset(int correct = 0, int incorrect = 0){
    GAME::clearscreen();
    GAME::titledisplay();
    GAME::option();
}

#endif