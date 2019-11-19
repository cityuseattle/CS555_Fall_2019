#include <iostream>
using namespace std;

class printData {
    public: void print(int i){
        cout << "Printing int: " << i << endl;
    }
    void print(double f){
        cout << "Printing float: " << f << endl;
    }
    void print(const char * c){
        cout << "Printing character: " << c << endl;
    }
};

int main(void){
    printData pd;

    pd.print(5); //call print to print int
    pd.print(500.263); //call print to print float
    pd.print("Hello C++");

    return 0;
}