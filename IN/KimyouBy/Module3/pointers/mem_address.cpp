#include <iostream>
using namespace std;

int main()
{
    int var1;
    char var2[10];

    int *ip;    // declare a pointer variable int *ip
    ip = &var1;

    cout <<"Address of var1 variable: ";
    cout << &var1 <<endl;

    cout <<"Address of var2 variable: ";
    cout << &var2 <<endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;


    return 0;
}