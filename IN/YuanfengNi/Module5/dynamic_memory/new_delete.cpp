#include<iostream>
using namespace std;
class box{
    public:
    box(){
        cout<<"Constructor called!"<<endl;
    }
    ~box(){
        cout<<"Destructor called!"<<endl;
    }
};
int main(){
    double* pvalue = NULL;
    pvalue = new double;
    *pvalue = 29494.99;
    cout<<"Value of pvalue: "<<*pvalue<<endl;
    delete pvalue;
    box*myboxarray = new box[4];
    delete[] myboxarray;
    return 0;
}