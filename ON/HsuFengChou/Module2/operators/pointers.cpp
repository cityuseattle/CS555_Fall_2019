#include <iostream>
using namespace std;

int main(){
   int firstvalue, secondvalue;
   int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    *mypointer = secondvalue + 20;
    cout << "First Value is: " << firstvalue << '\n';
    cout << "second Value is: " << secondvalue << '\n';
    return 0;
}