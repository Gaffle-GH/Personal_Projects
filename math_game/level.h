#ifndef LEVEL_H
#define LEVEL_H
#include "functions.h"
#include "colors.h"
#include <cmath>
#include <iostream>
#include <iomanip>


//Levels
#include "modes.h"

// Add the Points System in Game Match
void GAME::gameMATCH(int num_quetions, int num_difficulty){
    correct = 0;
    incorrect = 0;
    double points_mult = 1.0;
    double points = 0.0;

    bool first_question = true;
    if(first_question == true){
        cout << color(BOLD) << color(RED) << "Question has not been answered!" << color(RESET) << endl << endl;
    }

    for(int i = 0; i < num_quetions; i++){
        int count = i + 1;
       
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
            
            cout << color(MAGENTA) << "Points Multiplier: " << color(WHITE) << setprecision(2) << points_mult << "x" << color(RESET) << endl;
            cout << color(MAGENTA) << "Points: " << color(WHITE) << setprecision(3) << points << color(RESET) << endl;
            cout << color(MAGENTA) << "Question " << color(WHITE) << i + 1 << ": " << color(RESET) << q1 << sign << q2 << " = ? " << endl << endl;
            cout << color(WHITE) << color(BOLD) << "Answer: " << color(RESET);
            cin >> answer;
        

            if(answer == question_answer){
                correct++;
                points += 1.0 * points_mult;  // Points
                points_mult = points_mult * (0.1 + 1.1); // Point Increment
                GAME::clearscreen();        
                GAME::titledisplay();
                cout << color(BOLD) << color(GREEN) << "Previous Question is Correct!" << color(RESET) << endl << endl;       
                first_question = false; 
            }else if(answer != question_answer){
                incorrect++;
                points_mult = 1.0; // Reset Multiplier to 1.0
                // Worm Progression Function
                GAME::clearscreen();
                GAME::titledisplay();
                cout << color(BOLD) << color(RED) << "Previous Question is Incorrect!" << color(RESET) << endl << endl;
                first_question = false;
            }
        // MEDIUM
        } else if(num_difficulty == 2){
            srand(time(0));
            int operatorrand = rand() % 3 + 1;
            string sign;

            if(operatorrand == 1){
                q1 = rand() % 20 + 1;
                q2 = rand() % 20 + 1;
                question_answer = q1 + q2;
                sign = " + ";
            }else if(operatorrand == 2){
                q1 = rand() % 20 + 1;   
                q2 = rand() % 20 + 1;
                question_answer = q1 - q2;
                sign = " - ";
            }else if(operatorrand == 3){
                q1 = rand() % 10 + 1;
                q2 = rand() % 10 + 1;
                question_answer = q1 * q2;
                sign = " * ";
            }

            cout << color(MAGENTA) << "Points Multiplier: " << color(WHITE) << setprecision(2) << points_mult << "x" << color(RESET) << endl;
            cout << color(MAGENTA) << "Points: " << color(WHITE) << setprecision(3) << points << color(RESET) << endl;
            cout << color(MAGENTA) << "Question " << color(WHITE) << i + 1 << ": " << color(RESET) << q1 << sign << q2 << " = ? " << endl << endl;
            cout << color(WHITE) << color(BOLD) << "Answer: " << color(RESET);
            cin >> answer;

            if(question_answer == answer){
                correct++;
                points += 1.0 * points_mult; 
                points_mult = points_mult * (0.1 + 1.2); 
                // Worm Progression Function
                GAME::clearscreen();        
                GAME::titledisplay();
                cout << color(BOLD) << color(GREEN) << "Previous Question is Correct!" << color(RESET) << endl << endl;      
                first_question = false;
            }else if(question_answer != answer){
                incorrect++;
                points_mult = 1.0;
                // Worm Progression Function
                GAME::clearscreen();
                GAME::titledisplay();
                cout << color(BOLD) << color(RED) << "Previous Question is Incorrect!" << color(RESET) << endl << endl;
                first_question = false;
            }
        //HARD
        } else if(num_difficulty == 3){
            srand(time(0));
            int operatorrand = rand() % 4 + 1;
            string sign;

            if(operatorrand == 1){
                q1 = rand() % 30 + 1;
                q2 = rand() % 30 + 1;
                question_answer = q1 + q2;
                sign = " + ";
            }else if(operatorrand == 2){
                q1 = rand() % 30 + 1;   
                q2 = rand() % 30 + 1;
                question_answer = q1 - q2;
                sign = " - ";
            }else if(operatorrand == 3){
                q1 = rand() % 15 + 1;
                q2 = rand() % 15 + 1;
                question_answer = q1 * q2;
                sign = " * ";
            }else if(operatorrand == 4){
                q1 = rand() % 15 + 1;
                q2 = rand() % 15 + 1;
                question_answer = q1 / q2;
                sign = " / ";
            }
            cout << color(MAGENTA) << "Points Multiplier: " << color(WHITE) << setprecision(2) << points_mult << "x" << color(RESET) << endl;
            cout << color(MAGENTA) << "Points: " << color(WHITE) << setprecision(3) << points << color(RESET) << endl;
            cout << color(MAGENTA) << "Question " << color(WHITE) << i + 1 << ": " << color(RESET) << q1 << sign << q2 << " = ? " << endl << endl;
            cout << color(WHITE) << color(BOLD) << "Answer: " << color(RESET);
            cin >> answer;

            if(question_answer == answer){
                correct++;
                points += 1.0 * points_mult; 
                points_mult = points_mult * (0.1 + 1.3); 
                // Worm Progression Function
                GAME::clearscreen();        
                GAME::titledisplay();
                cout << color(BOLD) << color(GREEN) << "Previous Question is Correct!" << color(RESET) << endl << endl;       
                first_question = false; 
            }else if(question_answer != answer){
                incorrect++;
                points_mult = 1.0;
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
            GAME::gameover(points, num_questions, num_difficulty, correct, incorrect);
            return;
        }
    }
}


void GAME::gameover(double points, int num_questions, int num_difficulty, int correct, int incorrect){
    GAME::clearscreen();        
    GAME::titledisplay();

    int total_percent = (correct * 100) / num_questions;
    
    
    cout << color(BOLD) << color(MAGENTA) << "Game Over!" << color(RESET) << endl << endl;
    cout << color(MAGENTA) << "Points" << color(WHITE) << ": " << setprecision(3) << points << color(RESET) << endl;
    cout << color(MAGENTA) << "Questions" << color(WHITE) << ": " << color(WHITE) << num_questions << color(RESET) << endl;
      if (num_difficulty == 1){
        cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Easy" << color(RESET) << endl;
    }else if(num_difficulty == 2){
        cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Medium" << color(RESET) << endl;
    }else if(num_difficulty == 3){
        cout << color(MAGENTA) << "Difficulty" << color(WHITE) << ": " << color(WHITE) << "Hard" << color(RESET) << endl;
    }
    cout << color(MAGENTA) << "Correct / Incorrect" << color(WHITE) << ": " << correct << " / " << incorrect << color(WHITE) << color(RESET) << endl;
    cout << color(MAGENTA) << "Accuracy" << color(WHITE) << ": " << color(WHITE) << total_percent << "%" << color(RESET) << endl;

    cout << endl << color(MAGENTA) << "Play Again?" << color(RESET) << " [Y][N]" << endl;
    cout << color(WHITE) << "Option: " << color(RESET);
    string play_again;
    cin >> play_again;

    if(play_again == "Y" || play_again == "y"){
        GAME::clearscreen();
        GAME::titledisplay();
        GAME::startgame();
    }else if(play_again == "N" || play_again == "n"){
        GAME::clearscreen();
        exit(0);
    }
}

#endif