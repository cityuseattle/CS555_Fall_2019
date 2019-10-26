#include <iostream>
using namespace std;

static int count=0;

void counter()
{
    cout << count++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
    cout << endl;
    return 0;
}