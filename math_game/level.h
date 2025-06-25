#ifndef LEVEL_H
#define LEVEL_H
#include "functions.h"
#include "colors.h"

void GAME::gameMATCH(int num_quetions, int num_difficulty){
    bool first_question = true;
    if(first_question == true){
        cout << color(BOLD) << color(RED) << "Question has not been answered!" << color(RESET) << endl << endl;
    }

    for(int i = 0; i < num_quetions; i++){
        int count = i + 1;
       
        // EASY
        if(num_difficulty == 1){
            srand(time(0));
            int operatorrand = rand() % 2 + 1;
            string sign;

            if(operatorrand == 1){
                q1 = rand() % 10 + 1;
                q2 = rand() % 10 + 1;
                question_answer = q1 + q2;
                sign = " + ";
            }else if(operatorrand == 2){
                q1 = rand() % 10 + 1;
                q2 = rand() % 10 + 1;
                question_answer = q1 - q2;
                sign = " - ";
            }
            
            cout << color(MAGENTA) << "Question " << color(WHITE) << i + 1 << ": " << color(RESET) << q1 << sign << q2 << " = ? " << endl << endl;
            cout << color(WHITE) << color(BOLD) << "Answer: " << color(RESET);
            cin >> answer;
        

            if(answer == question_answer){
                correct++;
                // Worm Progression Function
                GAME::clearscreen();        
                GAME::titledisplay();
                cout << color(BOLD) << color(GREEN) << "Previous Question is Correct!" << color(RESET) << endl << endl;       
                first_question = false; 
            }else if(answer != question_answer){
                incorrect++;
                // Worm Progression Function
                GAME::clearscreen();
                GAME::titledisplay();
                cout << color(BOLD) << color(RED) << "Previous Question is Incorrect!" << color(RESET) << endl << endl;
                first_question = false;
            }
        } 

        if(count == num_questions){
            GAME::clearscreen();
            GAME::titledisplay();
            GAME::gameover(num_questions, num_difficulty, correct, incorrect);
            return;
        }
    }
} 

void GAME::gameover(int num_questions, int num_difficulty, int correct, int incorrect){
    GAME::clearscreen();        
    GAME::titledisplay();
    string difficulty;

    int total_percent = (correct * 100) / num_questions;

    if (num_difficulty == 1){
        string difficulty = "Easy";
    }else if(num_difficulty == 2){
        string difficulty = "Medium";
    }else if(num_difficulty == 3){
        string difficulty = "Hard";
    }
    
    cout << color(BOLD) << color(MAGENTA) << "Game Over!" << color(RESET) << endl << endl;
    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
    cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << difficulty << color(RESET) << endl;
    cout << color(MAGENTA) << "Correct / Incorrect" << color(WHITE) << ": " << correct << " : " << incorrect << color(WHITE) << color(RESET) << endl;
    cout << color(MAGENTA) << "Percent" << color(WHITE) << ": " << color(WHITE) << total_percent << color(RESET) << endl;

}

void GAME::play10easy(){
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

#endif