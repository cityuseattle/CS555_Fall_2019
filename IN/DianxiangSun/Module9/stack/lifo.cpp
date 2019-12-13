#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<'\t';
        s.pop();
    }
}
bool sEmpty(stack <int> s){
    if(s.empty()){
        return "true";
    }else{
        return "false";
    }
}

int main(){
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);

    cout<<"the stack is : ";
    showstack(s);

    cout<<"\ns.size(): "<<s.size();
    cout<<"\ns.top(): "<<s.top();

    cout<<"\ns.pop(): ";
    s.pop();
    showstack(s);
    cout<<endl;

    cout<< "empty stack ? :"<< sEmpty(s) <<endl;

    return 0;
}