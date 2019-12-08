#include <iostream>
using namespace std;

class Box{
    public:
    Box(){
        cout<<"constructor called"<<endl;
    }
    ~Box(){
        cout<<"destractor called" << endl;
    }
};

int main(){
    double* pvalue=NULL;
    pvalue=new double;

    *pvalue=29494.99;
    cout<<"value of pvalue:   "<<*pvalue<<endl;

    delete pvalue;

    Box* myBoxArray=new Box[4];
    delete [] myBoxArray;
    return 0; 
}
