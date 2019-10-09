#include <iostream>
using namespace std;

int g = 45;

int main(){
    // Local variable declaration:
    int a, b;
    int c;

    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    // accessing and displaying a global variable
    cout << ::g; 

    return 0;
}