#include <iostream>
using namespace std;

int main()
{
    int i;
    // a reference variable, alias
    /* access the contents of the variable through either 
    the original variable name or the reference */
    int &r = i;
    i = 5;
    cout << "Value of i: " << r << endl;
    cout << "Value of i reference: " << r << endl;
    return 0;
}
