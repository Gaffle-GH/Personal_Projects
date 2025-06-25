#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>
#include <cstdlib>

using namespace std;

class GAME{
    public:
        GAME(string name, int score);
        void clearscreen();

        //Displays
        void titledisplay();
        void option();
        void gameMATCH(int num_quetions, int num_difficulty);
        void gameover(int num_questions, int num_difficulty, int correct, int incorrect);

        // Game Functions
        void instructions();
        void startgame();
        void credits();
        void reset(int correct, int incorrect);

        // Gameplay Functions
        void play10();
        void play20();
        void play30();
        void play40();
        void play50();
        void play60();
        void play70();
        void play80();
        void play90();

        // Difficulty Functions
        void play10easy(); // DONE
        void play10medium(); // DONE
        void play10hard(); 
        
        void play20easy();
        void play20medium();
        void play20hard();

        void play30easy();
        void play30medium();
        void play30hard();

        void play40easy();
        void play40medium();
        void play40hard();

        void play50easy();
        void play50medium();
        void play50hard();

        void play60easy();
        void play60medium();
        void play60hard();

        void play70easy();
        void play70medium();
        void play70hard();

        void play80easy();
        void play80medium();
        void play80hard();

        void play90easy();
        void play90medium();
        void play90hard();

    protected:
        string name;
        int score;

        // Game Format
        int num_questions;
        int num_difficulty;

        // Game Variables
        int q1,q2;
        int answer;
        int question_answer;

        // Test Questions
        int correct;
        int incorrect;
};

