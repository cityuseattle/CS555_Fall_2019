#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << ' | ';
        s.pop();
    }
    cout << endl;
}

// Challenge Accepted!
void clearstack(stack<int> *s)
{
    while (!s->empty())
    {
        s->pop();
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The original stack is: ";
    showstack(s);

    cout << "Clear the stack" << endl;
    clearstack(&s);

    cout << "The stack after cleared: ";
    showstack(s);

    cout << "Pushing values to the stack again..." << endl;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "s.size(): " << s.size() << endl;
    cout << "s.top(): " << s.top() << endl;

    // Remove the top element
    cout << "Remove the top element" << endl;
    s.pop();

    cout << "The stack is: ";
    showstack(s);

    return 0;
}