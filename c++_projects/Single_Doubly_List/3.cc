#include <string>
#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> letters;
    letters.push_back("A");
    letters.push_back("B"); // Erase
    letters.push_back("C");
    letters.push_back("D"); // Erase
    letters.push_back("E");
    letters.push_back("F"); // Erase

    list<string>::iterator pos = letters.begin();
    cout << "List before erase: ";
    for(pos = letters.begin(); pos != letters.end(); pos++){
        cout << *pos << " ";
    }
    cout << endl;

    pos = letters.begin();
    int count = 1;
    while(pos != letters.end()){
        if (count % 2 == 0){
            pos = letters.erase(pos);
        } else {
            pos++;
        }
        count++;
    }

    cout << "List after erase: ";
    for(pos = letters.begin(); pos != letters.end(); pos++){
        cout << *pos << " ";
    }

    return 0;
}