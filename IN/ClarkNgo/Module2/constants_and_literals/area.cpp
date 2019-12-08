#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HORTAB '\t'

int main() {
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char VERTAB = '\v';
   int area;

   area = LENGTH * WIDTH;
   cout << "Area: " << HORTAB << VERTAB << area ; // change this code
   cout << NEWLINE;
   return 0;
}
