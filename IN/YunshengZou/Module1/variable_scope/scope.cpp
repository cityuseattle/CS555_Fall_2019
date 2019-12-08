#include <iostream>
using namespace std;
int g = 1;//global variable declaration
int main(){
    //local variable declaration
    int a,b;
    int c;

    //actual initialization 
    a = 10;
    b = 20;
    c = a + b;

    cout<<"local variable: "<<c<<endl;

    cout<<"global variable: "<<g<<endl;
    return 0;
}