#include <iostream>
using namespace std;

void counter()
{
    int static count=0;
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