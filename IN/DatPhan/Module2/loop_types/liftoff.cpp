#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    for(;n > 2;n -= 2){
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}