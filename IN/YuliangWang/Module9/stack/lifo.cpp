#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s )
{
    while(!s.empty())
    {
        cout<<s.top()<<'\t';
        s.pop();
    }
}
void checkEmpty(stack<int> s)
{
    if(s.empty())
    {
        cout<<"Ture"<<endl;
    }
    else
    {
            cout<<"False"<<endl;
    }
    
}
int main()
{
    
    stack <int > s;
    checkEmpty(s);
    s.push(10);
    s.push(20);
    s.push(20);
    s.push(5);
    s.push(1);

cout<< "The stack is: ";
showStack(s);

cout<<"\ns.size(): "<<s.size();
cout<<"\ns.top(): "<<s.top();



cout<< "\ns.pop(): ";
s.pop();
showStack(s);
cout<<endl;
checkEmpty(s);
return 0;
}