#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int i, j;
    //set the seed
    srand ((unsigned)time (NULL));
    /*generate 10 random numbers. change to 5 instead of 10*/
    for(i=0; i < 5; i++){
        //generate actual number 1-20
        j = (rand()%20)+1;
        cout <<"Random numbers: "<< pow(j,2) << endl;
    }
    return 0;
}
