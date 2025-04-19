#include "functions.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){    

    string name = "NULL";
    double score = 0;

    GAME game(name, score);
    game.clearscreen();
    game.titledisplay();
    game.option();
}
