#include <iostream>
using namespace std;

int main() {
  int var1 = 0;
  char var2[10];
  int *ip;

  cout << "Address of var1 variable: " << &var1 << endl;
  cout << "Address of var2 variable: " << &var2 << endl;


  ip = &var1;

  // print the address stored in ip pointer variable
  cout << "Address stored in ip variable: ";
  cout << ip << endl;

  // access the value at the address available in pointer
  cout << "Value of *ip variable: ";
  cout << *ip << endl;

  return 0;
}