#include <iostream>
#include <stack>
using namespace std;
void showstack(stack <int> s)
{
    while(!s.empty())
    {
        cout << s.top() << '\t';
        s.pop();
    }
}
// for emptying the whole stack
void emptystack(stack <int> &s)
{
    while(!s.empty())
    {
        s.pop();
    }
    cout <<"Stack is now empty. Try to pull element will cause segment error; Stack size: " << s.size() << endl;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    cout << s.empty();
    cout <<"The stack is : ";
    showstack(s);
    cout << "\ns.size() : " << s.size();
    cout << "\ns.stop() : " << s.top();
    cout << "\ns.pop() : ";
    s.pop();
    showstack(s);
    
    cout <<endl;
    emptystack(s);
    return 0;
    
}