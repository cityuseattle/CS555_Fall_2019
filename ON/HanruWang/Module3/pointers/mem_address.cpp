#include <iostream>
using namespace std;

int main() {
    int var1;
    char var2[10];
    int *ip;

    ip = &var1;

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    cout << "The address stored in ip pointer variable: ";
    cout << ip << endl;
    cout << "The value of *ip pointer: ";
    cout << *ip << endl;

    return 0;
}