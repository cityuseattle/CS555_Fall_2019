#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<'\t';
        s.pop();
    }
}

void isEmpty(stack<int> s){
    if(s.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
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
    cout<<"the stack is empty? ";
    isEmpty(s);

    return 0;
}