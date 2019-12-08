#include <iostream>
using namespace std;

class Box {
    public:
      Box() {
          cout << "Constructor called!" <<endl;
      }
      ~Box() {
          cout << "Deconstructor called!" << endl;
      }
};

int main() {
    double* pvalue = NULL;
    pvalue = new double;

    *pvalue = 294949.99;
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue;

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray;

    return 0;
} 