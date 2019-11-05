
#include<iostream>
using namespace std;

class printData{
    public:

    void print(int i){
        cout<<"Print int: "<<i<<endl;
    }

    void print(double f){
        cout<<"Print float: "<<f<<endl;
    }

    void print (char* str){
        cout<<"Printing character: "<<str<<endl;
    }
};

int main(){
    printData pd;
    pd.print(5);
    pd.print(500.253);
    pd.print("Hello C++");
    return 0;
}

