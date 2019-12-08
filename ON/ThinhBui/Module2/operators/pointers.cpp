#include <iostream>
using namespace std;
int main(){
    int firstValue, secondValue;
    int * mypointer;
    mypointer = &firstValue;
    *mypointer = 10;
    mypointer = &secondValue;
    *mypointer = 20;
    *mypointer = *mypointer + 20;
    cout << "first value is " << firstValue << '\n';
    cout << "second value is " << secondValue << '\n';
    return 0;
}
