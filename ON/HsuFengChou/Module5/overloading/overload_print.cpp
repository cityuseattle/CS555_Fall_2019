#include <iostream>
using namespace std;

class printData{
    public:
    void print(int i){
        cout << "Printing int: " << i <<endl;
    }
    void print(double f){
        cout << "Print float: " << f << endl;
    }
    void print(char const *s ){
        
        
        
        cout << "Printing character: " << s << endl;
    }
};

int main(void){
    
    printData pd;

    pd.print(5);
    pd.print(500.263);
    pd.print("Hello C++");

    return 0;
}