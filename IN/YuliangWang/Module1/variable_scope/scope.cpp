#include <iostream>
using namespace std;
int c=3;
int main()
{
    //Local variable declaration:
    int a,b;
    int c;

    //actual initialization
    a = 10;
    b = 20;
    c = a+b;

    cout << ::c << endl ;
    return 0;
}