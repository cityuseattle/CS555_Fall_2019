#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s) {
    while(!s.empty()) {
        cout << s.top() << "\t";
        s.pop();
    }
    cout << endl;
}

bool empty(stack <int> s) {
    return s.size() == 0;
}
int main() {
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(30);
    s.push(5);
    s.push(1);

    cout << "Stack is: ";
    showstack(s);

    cout << "\ns.size(): " << s.size();
    cout << "\ns.top(): " << s.top();

    cout << "\ns.pop(): ";
    s.pop();
    showstack(s);
    cout << endl;
    cout << empty(s);
    return 0;
}
