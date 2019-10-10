#include <iostream>
using namespace std;

//global variable declaration and initialization
int g=23;

int main()
{
    //Local variable declaration
    int a,b;
    int c;

    //actual initialization
    a=10;
    b=20;
    c=a+b;

    cout<<::g;

    return 0;
}