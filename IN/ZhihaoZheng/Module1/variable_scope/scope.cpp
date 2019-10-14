#include <iostream>
using namespace std;

int c = 1;

int main(){
    int a, b;
    int c;
    a = 10;
    b = 20;
    c = a + b;
    cout <<"the global variable c is:"<< ::c << "the varibale is:" << c;

    return 0;
}
