#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    static const int MAX_SIZE = 5;
    static const int TARGET = 7;
    int j, i, currSum, closestTarget, tempResult, IndexA, IndexB;
    
    int arrayA[MAX_SIZE] = {-1, 2, 10, 16, 2};
    int arrayB[MAX_SIZE] = {10, 11, 6, 7, 3};
    closestTarget = TARGET;

    for(int i=0; i<MAX_SIZE; i++) { // fixing at one position of arrayA
             for(int j=0; j<MAX_SIZE; j++) { // running throught all positions of arrayB

                // save the closest combination so far
                currSum = arrayA[i] + arrayB[j];
                tempResult = abs(TARGET - currSum);
                if (tempResult < closestTarget) {
                    closestTarget = tempResult;
                    IndexA = i;
                    IndexB = j;
                }
             }    
    } 
    
    cout << endl << "Best combination Array[A]+Array[B] => " << arrayA[IndexA] << "+" << arrayB[IndexB] << endl;

    return 0;
}