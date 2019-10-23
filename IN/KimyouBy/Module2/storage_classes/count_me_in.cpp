#include <iostream>
using namespace std;

void counter() 
{
    static int count = 0; //modify this code
    cout << count++;
}

int main () {

    for (int i = 0; i <5; i++) 
    {
        counter();
    }
    cout << endl;

    return 0;
}