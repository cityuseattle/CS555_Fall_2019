#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int i, j;
    //set the seed
    srand((unsigned) time (NULL));
    //generate 5 ran num
    for (i =0; i <5; i++){
        //generate actual ran num from 1 - 20
        j = (rand() % 20) + 1;
        //j is square root of printed number
        cout << "Randome Number: " << pow (j, 2) << "\n" << "Square Root is: " << j << endl;
    }
    return 0;
}