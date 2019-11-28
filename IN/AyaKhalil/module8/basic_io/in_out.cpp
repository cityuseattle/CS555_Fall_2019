#include<iostream>
using namespace std;

int main(){
    char name[50];
    int age;
    char str[]="unable to read";
    cout<<"please enter ur name: ";
    cin>>name;
    cout<<"please enter ur age: ";
    cin>>age;
    cout<<"ur name is "<<name<<endl;
    cout<<"ur age is "<<age<<endl;
    cerr<<"error msg: "<<str<<endl;
    clog<<"error msg: "<<str<<endl;

}