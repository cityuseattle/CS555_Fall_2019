#include <iostream>
using namespace std;

    // global variable declaration
    int g = 5;

int main(){
    // local variable declaration
    int a, b;
    int c;
    


    // actual initialization
    a = 10;
    b = 20;
    c = a + b;

    cout << "local variable c = " << c << endl;
    cout << "global variable g = " << ::g ;

    return 0;
}