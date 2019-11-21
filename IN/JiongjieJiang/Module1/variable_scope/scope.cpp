#include <iostream>
using namespace std;

int g=10;
int main()
{
    int a, b;
    int c;

    a = 10;
    b = 20;
    c = a + b;
    int g = 5;

    cout << c << endl;
    cout << ::g;

    return 0;
}