#include <iostream>
using namespace std;

int g = 30;
int main () {
    int a,b;
    int c;

    a = 10;
    b = 20;
    c = a+b;    

    cout << ::g; 
    
    return 0;
}

