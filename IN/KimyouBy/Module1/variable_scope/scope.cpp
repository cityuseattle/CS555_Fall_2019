#include <iostream>

using namespace std;

int g;  // global variable

int main()  {
    // local variable declaration:
    int a, b, c;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << g << endl;  // change this line

    return 0;

}
