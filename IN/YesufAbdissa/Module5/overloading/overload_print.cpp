#include <iostream>
using namespace std;

class printData {
    public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }
    void print(double f) {
        cout << "Printing float: " << f << endl;
    }

    void print(char* c) {
        cout << "Printing character: " << c  << endl;
    }
};

int main(void) {
    printData pd;

    pd.print(5);   // call to print integer
    pd.print(500.263);  // call print to print float
    pd.print("Hello C++"); // call print to print character
    return 0;
}