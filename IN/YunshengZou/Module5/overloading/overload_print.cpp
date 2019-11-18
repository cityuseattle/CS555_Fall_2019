#include <iostream>
using namespace std;

class printData {
    public:
    void print(int i){
        cout << "Printing int: " << i << endl;
    }
    void print(double f){
        cout << "Printing float: " << f << endl;
    }
    //add another overload function use char
    void print(char* ch){
        cout << "Printing character: " << ch << endl;
    }
};

int main(void){
    printData pd;

    pd.print(5); //Call print to print integer
    pd.print(500.263); //Call print to print float
    pd.print("Hello C++"); //Call print to print character
    return 0;
}