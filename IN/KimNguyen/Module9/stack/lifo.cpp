#include<iostream>
#include<stack>
using namespace std;

void showstack(stack <int> s){
    while (!s.empty()){
        cout << s.top() << '\t';
        s.pop();
    }
}



int main(){
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    

    cout << "The stack is: ";
    showstack(s);

    cout << "\n s.size() : " << s.size();
    cout << "\n s.top() : " << s.top();

    cout << "\n s.pop(): ";
    s.pop();
    showstack(s);
    cout << endl;

    //challenge: write empty func
    s.empty();{
        if (s.empty()) { 
            cout << "True"; 
        } 
        else { 
            cout << "False"; 
        } 
    };


    return 0;
}