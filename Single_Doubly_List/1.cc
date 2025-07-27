#include <string>
#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> names;

    names.push_back("John");
    names.push_back("Paul");

    list<string>::iterator pos = names.begin();

    cout << "Oringal List: ";
    for(pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << " ";
    }
    cout << endl << endl;

    pos = names.begin();
    pos++;
    pos++;

    names.insert(pos, "Greg");

    cout << "After Insert: ";
    for(pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << " ";
    }
    cout << endl << endl;

    // Remove

    pos = names.begin();
    pos++;
    names.erase(pos);

    cout << "After Remove: ";
    for(pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << " ";
    }
    cout << endl;

    return 0;
}