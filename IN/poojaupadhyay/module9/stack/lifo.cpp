#include <iostream>
#include<stack>
using namespace std;

void showstack(stack<int> s)
{
   while(!s.empty())
   {
       cout << s.top()<<"\t";
       s.pop();
   }
}

bool empty(stack<int> st)
{  
    if (st.size() == 0)
    {
        return true;
    
    }

    else 
    {
        return false;
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

    cout << "The stack is : ";
    showstack(s);

    cout << "\n s.size() : " << s.size();
    cout << "\n s.top() : " << s.top();

    cout << "\n s.pop() : ";

    s.pop();
    showstack(s);
    cout << endl;

    bool ans = empty(s);
    if(ans == true)
    {
        cout << "Stack is empty";
    }

    else 
    {
        cout << "Stack is not empty";
    }
    return 0;
}
