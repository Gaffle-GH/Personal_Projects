#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main(){
    cout << "FIFO order:" << endl;
    queue<string> q;
    q.push("Sue");
    q.push("John");
    q.push("Mary");

    stack<string> s;
    while(q.size() > 0){
        string name = q.front();
        q.pop();
        cout << name << endl;
        s.push(name);
    }

    cout << "LIFO Order:" << endl;

    while(s.size() > 0){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}