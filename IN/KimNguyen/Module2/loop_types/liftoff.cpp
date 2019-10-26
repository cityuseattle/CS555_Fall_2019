#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for (n>0; n-2>=2; --n) {
        cout << n << ", ";
        --n;
    }
    cout << "liftoff!\n";
}