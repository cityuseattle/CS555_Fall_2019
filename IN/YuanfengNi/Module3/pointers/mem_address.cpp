#include<iostream>
using namespace std;
int main(){
    int var1, *ip;
    char var2[10];
    ip = &var1;
    cout<<"Address of var1 variable: ";
    cout<<&var1<<endl;
    cout<<"Adress of var2 variable: ";
    cout<<&var2<<endl;
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}