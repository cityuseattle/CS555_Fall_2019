#include <iostream>
using namespace std;

int main(){
    int var1=0;
    char var2[10];
    int *ip;
    ip=&var1;

    cout<<"address of var1: "<<&var1<<endl;
    cout<<"address of var2: "<<&var2<<endl;
    cout<<"address in ip: "<<ip<<endl;
    cout<<"value in ip: "<<*ip<<endl;

    return 0;
}