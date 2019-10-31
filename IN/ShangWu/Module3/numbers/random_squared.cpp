#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdio>
using namespace std;

int main () {
    int i,j;

srand((unsigned)time(NULL));
for( i = 0;i <10; i++ ) {
    j = (rand() % 20)+1;
    cout <<" Random Number : " << pow(j,2) << endl;
    }
    return 0;
}