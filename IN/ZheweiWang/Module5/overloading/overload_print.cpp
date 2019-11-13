#include <iostream>
using namespace std;

class printData{
    public:
    void print(int i){
        cout<<"Printing int: "<<i<<endl;
    }
    void print(double f){
        cout<<"Printing float: "<<f<<endl;
    }

    void print(char* chars){
        cout<<"Printing characters: "<< chars<<endl;
    }
};

int main(void){
    printData pd;
    pd.print(5);
    pd.print(500.263);
    pd.print("characters");
    return 0;
}