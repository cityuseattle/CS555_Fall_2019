#include <iostream>
using namespace std;

int main() {
  char name[50];
  char str[] = "Unable to read....";
  int age;
  cout << "Please enter your name: ";
  cin >> name;
  cout << "Your name is: " << name << endl;
  cout << "Please enter your age: ";
  cin >> age;
  cout << "Your age is: " << age << endl;
  cerr << "Error message: " << str << endl;
  clog << "Error message: " << str << endl;
}
