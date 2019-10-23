#include<iostream>
using namespace std;
int main()
{
    int n =10;
    while(n > 2)
    {
        cout << n << " , ";
        n = n -2;
        if (n == 2) {
      break;
    }
    }

    cout << "Liftoff!\n";
}