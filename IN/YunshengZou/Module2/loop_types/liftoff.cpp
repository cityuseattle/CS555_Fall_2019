#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    // while (n>0)
    // {
    //     cout << n << ", ";
    //     --n;
    // }
    //modify the loop
    while (n>=4)
    {
        cout << n << ", ";
        n -= 2;
    }

    cout << "liftoff!\n";
}