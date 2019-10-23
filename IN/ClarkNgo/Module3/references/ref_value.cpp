#include <iostream>
using namespace std;

int main () {
   int i; // declare simple variables
   int& r = i;  // declare reference variables
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
   return 0;
}
