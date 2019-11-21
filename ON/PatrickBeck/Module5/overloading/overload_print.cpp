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
    void print(char* str) {
        cout << "Printing character: " << str << endl;
    }
};

int main(void) {
    printData pd;

    pd.print(5);  // Call print to print integer
    pd.print(500.263);  // Call print to print float
    pd.print("Hello C++"); // Call print to print char

    return 0;
}