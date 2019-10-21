#include <iostream>
using namespace std;

void counter(int i)
{
    
    int count=i;
    
    cout<< count++;
    
}

int main()
{
    for(int i =0;i<5;i++)
    {
        counter(i);
    }
    cout << endl;
    return 0;
}