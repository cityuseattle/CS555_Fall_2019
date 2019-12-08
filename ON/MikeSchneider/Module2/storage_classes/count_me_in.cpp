#include <iostream>
using namespace std;

void counter()
{
    int count = 0;
    static int count;
    cout << count++;
}

int main()
{
    for(int i=0; i<5; i++)
    {
        counter();
    }
    cout << endl;
    return 0;
}