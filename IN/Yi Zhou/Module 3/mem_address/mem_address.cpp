#include <iostream>
using namespace std;

int main()
{
    int var1=0;
    char var2[10];
    int *ip;

    ip=&var1;

    cout<<"Address of var1 varible: ";
    cout<<&var1<<endl;

    cout<<"Adress of var2 varible: ";
    cout<<&var2<<endl;

    cout<<"Address ip varible :";
    cout<<ip<<endl;

    cout<<"Value of *ip varible:";
    cout<<*ip<<endl;
}