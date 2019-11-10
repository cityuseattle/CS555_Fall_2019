#include <iostream>
using namespace std;

class Box {
    public:
    Box(){
        cout << "constructor called " << endl;
    }

    ~Box(){
        cout << "deconstructor called" << endl;
    }
};

int main(){
    double* pvalue = NULL;  // point initiallize with null
    pvalue = new double; //request memory for the variable

    *pvalue = 29494.99;   // store value at allocated address
    cout << "Value of the pvalue: " << *pvalue << endl;

    delete pvalue;    // free up the memory

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray;    // delete array


    return 0;
}