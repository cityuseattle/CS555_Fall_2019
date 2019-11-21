#include <iostream>
using namespace std;

void counter()
{
    static int count=0;// 相当于全局变量
    cout<<count++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
    cout<<endl;
    return 0;
}