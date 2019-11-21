#include <iostream>
using namespace std;

int main(){
    int var1;
    char var2[10];
    int *ip = &var1;

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;

    //print the address stored in ip pointer variable
    cout << "Address stored un ip variable: " << ip << endl;
    //access the value at the address available in pointer
    cout << "Value of the *ip variable: " << *ip << endl;

    return 0;
}