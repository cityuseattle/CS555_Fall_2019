#include <iostream>

using namespace std;

int main()
{
    char name[50];
    int age;    // Declare an integer age
    char str[] = "Unable to read....";
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
    cout << "Please enter your age: ";  // Prompt the user with message “Please enter your age: “
    cin >> age;
    cout << "Your age is: " << age << endl;
    cerr << "Error message : " << str << endl;
    clog << "Error message : " << str << endl;
}