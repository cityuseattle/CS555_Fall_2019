#include <iostream>
using namespace std;

string g = "This is a global var";

int main ()
{
    //local variable declaration:
    int a, b;
    int c;

    //actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << c;
    cout << g;

    return 0;

}