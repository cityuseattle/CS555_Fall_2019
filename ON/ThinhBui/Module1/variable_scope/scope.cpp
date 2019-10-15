#include <iostream>
using namespace std;
int g = 20;
int main() {
    int a, b;
    int c;
    a = 10;
    b = 20;
    c = a+b;
    cout << c << endl;
    cout << "global " <<  g << endl;
    return 0;
}