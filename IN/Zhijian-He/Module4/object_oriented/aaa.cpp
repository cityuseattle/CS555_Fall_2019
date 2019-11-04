#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *p = &a;
    cout << a << " " << &a << endl;
    cout << p << " " << &p << endl;

    return 0;
}