#include <string>
#include <iostream>
#include <list>

using namespace std;

int main(){
    list<string> names;

    string a = "Sue";
    string b = "John";
    string insert_c;

    cout << "Enter a Name: ";
    cin >> insert_c;

    names.push_back(a);
    names.push_back(b);
    names.push_back(insert_c);

    list<string>::iterator pos = names.begin();

    cout << "List: ";
    for(pos = names.begin(); pos != names.end(); pos++){
        cout << *pos << " ";
    }

    return 0;
}