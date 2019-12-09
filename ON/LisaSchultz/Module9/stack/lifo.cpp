#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << s.top() << '\t';
        s.pop();
    }
}

int main ()
{
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack is : ";
    showstack(s);

    cout << "\ns.size() : " << s.size();
    cout << "\ns.top() : " << s.top();

    cout << "\ns.pop() : ";
    s.pop();
    showstack(s);
    cout << endl;

    // checks to see if the stack is empty
    if (s.empty()) { 
        cout << "True: The stack is empty."; 
    } 
    else { 
        cout << "False: The stack is not empty"; 
    } 
    return 0;
}