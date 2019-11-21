#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int i, j;

    srand((unsigned)time(NULL));

    for(int i=0; i<5; i++) { // generate 10 ramdom numbers
       j = (rand() % 20)+1;   // generate random number between 1-20 
       cout << "Random number: " << j << " -> " << floor(sqrt(j)) << endl;
    } 
    return 0;
}