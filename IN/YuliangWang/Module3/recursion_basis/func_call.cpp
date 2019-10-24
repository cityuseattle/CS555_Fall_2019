#include <iostream>
using namespace std;


int mzx(int num1, int num2);

int main()
{

    int a = 100;
    int b = 200;
    int ret;
    int func;

   
    ret = max(a,b);
    cout<< "Max value is: "<< ret << endl;
    func = min(a,b);
    cout<< "Min value is: "<< func<< endl;
    return 0;
}


int max(int num1, int num2)
{

    int result;

    if(num1>num2)
        result = num1;
    else
    {
        result = num2;
    }

    return result;
    
}

int min(int num1, int num2)
{
    int result;

    if(num1>num2)
    {
        return num2;
    }
    else 
    {
        return num1;
    }
    return result;
}