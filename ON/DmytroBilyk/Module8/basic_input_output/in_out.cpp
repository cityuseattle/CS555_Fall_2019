#include <iostream>
using namespace std;

int main(void){
    char name[50];
    int age;
    char str[] = "Unable to read...";

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;
    cerr << "Error message: " << str << endl;
    clog << "Erro message: " << str << endl;

    return 0;
}