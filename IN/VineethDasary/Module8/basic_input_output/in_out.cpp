#include<iostream>
using namespace std;

int main() {
    char name[50];
    int age;
    char str[] = "Unable to Read....";
    cout << "Please enter your Name: ";
    cin >> name;
    cout << "Your Name is: " << name << endl;
    cout << "Please enter your Age: " ;
    cin >> age;
    cerr << "Error Message: " << str << endl;
    clog << "Error Message: " << str << endl;
}