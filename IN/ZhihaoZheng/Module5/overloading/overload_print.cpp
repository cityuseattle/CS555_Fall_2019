#include <iostream>
using namespace std;

class printData{
    public:
    void print(int i){
        cout << "Printing int:" << i << endl;
    }
    void print(double f){
        cout << "Printing float :" << f << endl;
    }
    void print(char* c){
        cout << "Printing char :" << c << endl;
    }
};

int main(void) {
    printData pd;

    pd.print(5);
    pd.print(500.263);
    char temp[] ={'H','e','l','l','o',' ','C','+','+'};
    pd.print(temp);
    return 0;
}