#include <iostream>
using namespace std;

//enter function
int main()
{
    char name[50]; //store name string

    char str[]="Unable to read...";

    cout<<"Please enter your name: ";

    cin>>name;

    cout<<"Your name is: "<<name<<endl; //cout output

    cerr<<"Error message: "<<str<<endl; //cerr output

    clog<<"Error message: "<<str<<endl; //clog output

    int age;

    cout<<"Please enter your age: ";
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
}