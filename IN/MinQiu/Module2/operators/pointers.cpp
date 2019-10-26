#include <iostream>
using namespace std;

int main(){
    int firstValue, secondValue;
    int * myPointer;

    myPointer = &firstValue;
    *myPointer = 10;
    myPointer = &secondValue;
    *myPointer = 20;
    *myPointer = 40;
    cout << "firstValue is " << firstValue << "\n";
    cout << "secondValue is " << secondValue << '\n';
    return 0;
}