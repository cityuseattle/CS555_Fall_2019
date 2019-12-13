#include<iostream>
#include<stack>
using namespace std;
void showstack(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<'\t';
        s.pop();
    }
}
int main(){
    int sum;
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    cout<<"The stack is : ";
    showstack(s);
    cout<<"\ns.size(): "<<s.size();
    cout<<"\ns.top(): "<<s.top();
    cout<<"\ns.top(): ";
    s.pop();
    showstack(s);
    cout<<endl;
    return 0; 
} 