#include<iostream>
using namespace std;

class printData{

    public:
    void print(int i){
        cout<<"Print int: "<< i<<endl;
    }

    void print(double f){
        cout<<"print float: "<<f<<endl;
    }
    
    void print(char* c){
        cout<<"print char: "<<c<<endl;
    }
};

int main(void){
    printData pd;

    pd.print(5);
    pd.print(232.44);
    pd.print('Hello C++');
    return 0;
}