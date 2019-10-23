#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
   int i,j;
   // set the seed
   srand( (unsigned)time( NULL ) );
   /* generate 5  random numbers. */
   for( i = 0; i < 5; i++ ) {   // change code in this line
      // generate actual random number 1 - 20
      j = (rand() % 20) + 1;
      cout <<" Random Number : " << pow(j,2) << endl;
      cout <<" Random Number : " << floor(sqrt(j)) << endl;
   }
   return 0;
}
