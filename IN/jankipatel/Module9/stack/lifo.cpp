#include<iostream>
#include<stack>
#include<string>
using namespace std;

void showStack(stack <int> s){
    while(!s.empty()){
        cout << s.top() << '\t';
        s.pop();
    }
}

string isEmptyStack(stack <int> s){
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

    cout<<"The stack is: ";
    showStack(s);

    cout<<"\ns.size() : "<<s.size();
    cout<<"\ns.top() : "<<s.top();

    cout<<"\ns.pop() : ";
    s.pop(); 
    showStack(s);
    cout<<endl;

    
    cout<< "stack s is empty: "<< isEmptyStack(s) <<endl;

    return 0;
}