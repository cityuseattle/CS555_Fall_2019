#include <iostream>
using namespace std;

class printData{
    public:
    void print(int i){
        cout << "Printing int: " << i << endl;
    }
    void print(double f) {
        cout << "Printing float: " << f << endl;
    }
    void print(char* c){
        cout << "Printing character: " << c << endl;
    }
};

int main(void) {
    printData pd;

    pd.print(5); // Call to print integer
    pd.print(500.263); // Call to print float
    pd.print("Hello C++");  // Call to print character

    return 0;
}