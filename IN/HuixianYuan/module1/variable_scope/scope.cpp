#include <iostream>
using namespace std;

int c=5;

int main(){
    //local variable declaration:
    int a,b;
    int c;

    //avtual initialzation
    a=10;
    b=20;
    c=a+b;

    cout<<c<<endl;
    cout<<::c<<endl;
    
    return 0;
}