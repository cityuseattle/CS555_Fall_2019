#include <iostream>
using namespace std;

int main() {
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    *mypointer += 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "second value is " << secondvalue << endl;
    return 0;
}