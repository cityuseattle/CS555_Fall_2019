#include<iostream>
using namespace std;
int main(){
    int var1;
    char var2[10];
    int *ip;

    cout<< "address of var1 variable:  ";
    cout<< &var1<<endl;

    cout<< "address of var2 variable: ";
    cout<<&var2<<endl;

    var1=0;
    ip = &var1;
    cout<<"Address stroed in ip variable: ";
    cout<< ip << endl;
    cout<<"value of *ip variable: ";
    cout<< *ip <<endl;
    return 0;
}