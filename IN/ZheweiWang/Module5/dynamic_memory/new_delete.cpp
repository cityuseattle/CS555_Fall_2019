#include <iostream>
using namespace std;

class Box{
    public:
    Box(){
        cout <<"Constructor called!" <<endl;
    }
    ~Box(){
        cout<<"Destructor called!"<<endl;
    }
};

int main(){
    double* pvalue =NULL;
    pvalue=new double;
    *pvalue=29494.99;
    cout<<"Value of pvalue : "<<*pvalue<<endl;
    delete pvalue;
    Box* myBoxArray =new Box[4];
    delete [] myBoxArray;
    return 0;
}