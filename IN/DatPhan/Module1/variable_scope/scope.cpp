#include <iostream>
using namespace std;

string g = "CS555";

int main()
{
    int a, b;
    int c;

    a = 10;
    b = 20;
    c = a + b;

    // cout << c;
    cout << ::g << endl;

    return 0;
}