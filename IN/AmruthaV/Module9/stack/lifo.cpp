#include <iostream>
#include <stack>

using namespace std;

void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << s.top() <<'\t';
        s.pop();
    }
    
}

void emptystack(stack<int> *s)
{
    while (!s->empty())
    {
        s->pop();
    }
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout << "The stack is: ";
    showstack(s);

    cout << "\ns.size(): " << s.size() << endl;
    cout << "\ns.top(): " << s.top() << endl;

    cout << "\ns.pop()" << endl;
    s.pop();
    showstack(s);
    cout << endl;
    
    cout << "Empty stack" << endl;
    emptystack(&s);

    return 0;
}