#include<iostream>
using namespace std;

class Box {
    public:
        Box() {
            cout << "Constructor called!" << endl;
        }
        ~Box() {
            cout << "Destructor called!" << endl;
        }
};

int main () {
    double* pvalue = NULL; // Pointer initialized with NULL value
    pvalue = new double;   // Request memory for the variable pvalue

    *pvalue = 29494.99;    // Store value at allocated address
    cout << "Value of pvalue: " << *pvalue << endl;

    delete pvalue;          // free up the memory

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray;  // Delete array

    return 0;
}