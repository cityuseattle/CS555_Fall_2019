#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    while(n > 0){
        cout << n << ", ";
        --n;
        --n;
        if(n == 2){
            break;
        }
    }

    cout << "liftoff!\n";
}