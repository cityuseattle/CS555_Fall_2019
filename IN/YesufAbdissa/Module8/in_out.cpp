#include <iostream>
using namespace std;

int main() {
    char name[50];
    char str[] = "Unable to read....";

    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Please enter your age: ";
    int age;
    cin >> age;

    cout << "Your name is: " << name << endl;
    cout << "Your age is: " << age << endl;

    cerr << "Error message: " << str << endl;
    clog << "Error message: " << str << endl;
}