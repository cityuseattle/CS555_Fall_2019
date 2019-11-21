#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int i, j;
    //set the seed
    srand( (unsigned)time(NULL));
    /*generate 10 random numbers. */
    for(i = 0; i < 5; i++){
        //genreate actual random number 1-20
        j = (rand() % 20) + 1;
        cout << "Random Number: " << pow(j,2) << endl;
    }
    return 0;
}