#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int i, j;

    // set the seed
    srand((unsigned)time(NULL));

    /* generate 10 random numbers. */
    for (i = 0; i < 5; i++)
    {
        // generate actual random number 1-20
        j = (rand() % 20) + 1;
        cout << "Randon Number: " << floor(pow(j, 2)) << endl; 
        cout << "Randon Number: " << floor(sqrt(j)) << endl; 
 }

    return 0;    
}