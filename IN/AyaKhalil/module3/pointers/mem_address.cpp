#include <iostream>
using namespace std;

int main () {
    int var1=0;
    char var2[10];
    int *ip;
    ip=&var1;

    cout <<"Address of var1 variable:  ";
    cout <<&var1 <<endl;

    cout <<"add of var2:   ";
    cout<< &var2<<endl;

    cout <<"add stored in ip var is :   ";
    cout <<ip <<endl;

    cout <<"value of *ip var:  ";
    cout <<*ip<<endl;
    return 0;
}