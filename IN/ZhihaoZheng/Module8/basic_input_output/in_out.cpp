#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int age;
    char str[] = "Unable to read...";
    cout << "Please enter your name:";
    cin >> name;
    cout << "your name is :" << name << endl;
    cout << "Please enter your age :";
    cin >> age;
    cout << "your age is :" << age <<endl;
    cerr << "Error message:" << str << endl;
    clog << "Error message:" << str << endl;
}