#include <iostream>
using namespace std;

// function declare
int min(int num1, int num2);
int max(int num1, int num2);

// function returning the min between two nums
int min(int num1, int num2)
{
    //local variable declare
    int result;

    if(num1 < num2)
    {
        result = num1;
    } else
    {
        result = num2;
    }
    return result;
}

// function returning the max between two nums
int max(int num1, int num2)
{
    //local variable declare
    int result;

    if(num1 > num2)
    {
        result = num1;
    } else
    {
        result = num2;
    }
    return result;
}

int main()
{
    //local variable declare
    int a = 100;
    int b = 200;
    int ret;
    int ret1;

    // calling a func to get max value
    ret1 = min(a, b);
    ret = max(a, b);
    
    cout <<"Min value is: " << ret1 <<endl;
    cout <<"Max value is: " << ret <<endl;

    return 0;
}