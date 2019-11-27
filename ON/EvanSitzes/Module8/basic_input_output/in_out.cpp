#include "iostream"
using namespace std;


int main() {
  char name[50];
  int age;
  
  char str[] = "Unable to read...";
  cout << "Please enter your name: ";
  cin >> name;
  cout << "Your name is: " << name << endl;

  cout << "Please enter your age: ";
  cin >> age;
  cout << "Your name is: " << age << endl;

  cout << "Error Message: " << str << endl;
  cout << "Error Message: " << str << endl;

  return 0;
}