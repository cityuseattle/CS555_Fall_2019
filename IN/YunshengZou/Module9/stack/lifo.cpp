#include <iostream>
#include <stack>
using namespace std;

void showStack(stack <int> s)
{
    while(!s.empty())
    {
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

    cout<<"The stack is : ";
    showStack(s);

    cout << "\ns.size(): " << s.size();
    cout << "\ns.top() : " << s.top();

    // cout << "\ns.pop() : ";
    // s.pop();
    // showStack(s);
    // cout << endl;

    int sum;
    while (!s.empty()) { 
        sum = sum + s.top(); 
        s.pop(); 
    } 
    cout <<"Pop the stack have :"<< sum; 
    return 0; 
}