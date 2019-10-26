#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer=&firstvalue;
    *mypointer=10;
    mypointer=&secondvalue;
    *mypointer=20;
    secondvalue=secondvalue+ *mypointer;

    cout << "firstvalue is" << firstvalue<<'\n';
    cout << "secindvalue is" << secondvalue<<'\n';
    return 0;
}