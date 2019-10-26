#include <iostream>
using namespace std;

int c = 15; // initializing a global variable to access in the local method.

int main() {

int a, b;
int c;

a = 10;
b = 20;
c = a+b;

cout << ::c;

return 0;
}