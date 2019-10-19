#include <iostream>
using namespace std;
int g = 777;

int main() {
    // Local variable declaration
    int a, b;
    int c;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;
    cout <<"Global Variable: " << ::g + a + b + c << endl; 
    return 0;
}