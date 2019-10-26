#include <iostream>
using namespace std;

// Global variable declaration:
int g = 20;

int main () {

   // Local variable declaration:   
   int a,b;
   int c;

   //actual initialization
   a = 10;
   b = 20;
   c = a + b;

   cout << c << endl;   

   int g = 10;

   cout << "Golbal variable: " << ::g; // change this line

   return 0;
}
