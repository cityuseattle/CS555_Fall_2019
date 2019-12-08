#include <iostream>
using namespace std;

int x=10;
int main () {
    int a, b;
    int c;

    a=10;
    b=20;
    c= a+b;

    cout <<c<< endl;
    cout<<"the variable x is: " << ::x<<endl;
    return 0;
}