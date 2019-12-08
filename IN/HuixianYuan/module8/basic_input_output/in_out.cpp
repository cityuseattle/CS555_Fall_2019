#include <iostream>
using namespace std;

int main(){
    char name[50];
    char str[]="unable to read...";
    int age;

    cout<<"enter your name:";
    cin>>name;
    cout<<"your name is "<<name<<endl;

    cout<<"enter your age:";
    cin>>age;
    cout<<"your age is "<<age<<endl;

    cerr<<"error messgae: "<<str<<endl;
    clog<<"error message: "<<str<<endl;
}