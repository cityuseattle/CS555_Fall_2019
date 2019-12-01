#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        // if division is not zero
        z = division(x, y);
        cout << z << endl;
    }
    // if division is zero, error occur and this will catch it and print message
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}