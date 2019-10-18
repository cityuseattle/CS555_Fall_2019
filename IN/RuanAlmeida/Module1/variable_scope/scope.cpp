#include <iostream> 
using namespace std; 
string g = "Global variable";

int main() {
   int a, b;
   int c;

   a = 10;
   b = 20;
   c = a + b; 
   
   cout << c <<endl;
   cout << g;
   return 0;           
}             