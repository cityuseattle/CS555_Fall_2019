#include <iostream>
using namespace std;

int main(){
    int var1;
    int *ip;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 <<endl;

    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}