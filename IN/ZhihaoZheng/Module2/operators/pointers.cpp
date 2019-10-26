#include<iostream>
using namespace std;

int main ()
{
    int value1, value2;
    int * mypointer;

    mypointer = &value1;
    *mypointer = 10;
    mypointer = &value2;
    *mypointer = 40;
    cout << "value1 is "<< value1 << '\n';
    cout << "value2 is "<< value2 << '\n';
    return 0;
}