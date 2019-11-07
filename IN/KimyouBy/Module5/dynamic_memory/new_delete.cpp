#include <iostream>
using namespace std;

class Box
{
public:
    Box()
    {
        cout << "Constructor called!" << endl;
    }
    ~Box()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{

    double *pvalue = NULL; // pointer initialized with null
    pvalue = new double;   // request memory for the variable

    *pvalue = 29494.99; // store value at allocated address
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue; // free up the memory

    Box *myBoxArray = new Box[4];
    delete[] myBoxArray; // delete array

    return 0;
}