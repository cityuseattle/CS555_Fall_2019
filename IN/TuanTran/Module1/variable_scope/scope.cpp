#include <iostream>
using namespace std;
int g = 10;
int main(){
    //Local variable declaration:
    int a, b;
    int c;
    
    // Actual initialization
    a = 10;
    b = 20;
    c = a+b;

    cout << "The global variable" << ::g <<endl; // Print out the global variable
    return 0;
}