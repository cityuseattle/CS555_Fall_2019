#include <iostream>
using namespace std;

class Box {
   public:
      Box() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor called!" <<endl; 
      }
};

int main() {
    double* pvalue  = NULL;      // Pointer initialized with null 
    pvalue  = new double;  // Allocate memory for a 3x4 array 

    *pvalue=29494.99;
    cout<<"Value of pvalue: "<<*pvalue<<endl;
    delete [] pvalue;

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; // Delete array

    return 0;
}