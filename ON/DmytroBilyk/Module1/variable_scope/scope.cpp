#include <iostream>   
using namespace std;  

int g = 777;          

int main(){
    // Local variable declaration:
    int a, b;
    int c;

    a = 10;
    b = 20;
    c = a + b;

    cout << c <<endl;
    cout << "Global variable g: " << g;
}