#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s){
    while(!s.empty()){
        cout << s.top() << '\t';
        s.pop();
    }
}

stack <int> emptystack(stack <int> s){
    // while(!s.empty()){
    //     cout << s.top() << '\t';
    //     s.pop();
    // }

    while (s.size() > 0) { 
        s.pop(); 
    }

    return s;
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack is: ";
    showstack(s);

    cout << "\ns.size(): " << s.size();
    cout << "\ns.top(): " << s.top();
    cout << "\ns.pop(): ";
    s.pop();
    showstack(s);
    cout << endl;

    cout << "Empty the stack now!" << endl;
    auto updatedStock = emptystack(s);

    cout << "Now the stack is: " << endl;
    showstack(updatedStock);

    return 0;
}