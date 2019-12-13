#include<iostream>
#include <stack>
using namespace std;

//output stack
void showstack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<'\t';
        s.pop();
    }

}

//main function as a user
int main()
{
    stack<int> s;

    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout<<"The stack is:";

    showstack(s);

    cout<<"\n s.size() :"<<s.size();
    cout<<"\ns.top() : "<<s.top();

    cout<<"\ns.pop(): ";
    s.pop();
    showstack(s);
    cout<<endl;
    if(s.empty())
    {
         cout<<"This stack is empty"<<endl;
    }else 
    {
        cout<<"This stack is not empty"<<endl;
    }
    
    return 0;
}