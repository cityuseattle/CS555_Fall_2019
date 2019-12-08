#include <iostream>
using namespace std;

class printData {
    public:
    void print(int i){
        cout << "Printing int: " << i <<endl;
    }
    void print(double  f) {
        cout << "Printing float: " << f << endl;
    }
};

int main(void){
    printData pd;

    pd.print(5);
    pd.print(500.263);

    return 0;
}