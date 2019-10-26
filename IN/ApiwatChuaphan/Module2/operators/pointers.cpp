#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 40;
    cout << "first is " << firstvalue << '\n';
    cout << "second is " << secondvalue << '\n';
    return 0;
}