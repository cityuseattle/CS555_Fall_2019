#include <iostream>
using namespace std;

int max_val(int num1, int num2);
int min_val(int num1, int num2);

int main()
{
    int a = 100;
    int b = 200;
    int max_value;
    int min_value;

    max_value = max_val(a, b);
    min_value = min_val(a, b);
    cout << "Max value is : " << max_value << endl;
    cout << "Min value is : " << min_value << endl;

    return 0;
}

int max_val(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

int min_val(int num1, int num2)
{
    int result;

    if (num1 > num2)
        result = num2;
    else
        result = num1;

    return result;
}
