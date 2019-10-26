#include <iostream>
using namespace std;

//function declaration of max number
int max(int num1, int num2);
//function declaration of min number
int min(int num1, int num2);

int main()
{
    //local variable declaration:
    int a = 100;
    int b = 200;
    int ret;

    //calling a function to get max value
    ret = max(a,b);
    cout << "Max value is : " << ret <<endl;
    ret = min(a,b);
    cout << "Min value is : " << ret <<endl;

    return 0;
}

//function returning the max between two numbers
int max(int num1,int num2)
{
    //local variable declaration
    int result;

    if(num1 > num2)
    {
        result = num1;
    }else
    {
        result = num2;
    }
    return result;
}

//function returning the min between two numbers
int min(int num1,int num2)
{
    //local variable declaration
    int result;

    if(num1 < num2)
    {
        result = num1;
    }else
    {
        result = num2;
    }
    return result;
}