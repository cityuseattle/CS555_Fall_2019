#include <iostream>
using namespace std;

int main ()
{
    int n = 10;

    while (n>2) {
        cout << n << ", ";
        --n;
        --n;
    }
    cout << "liftoff!\n";
}