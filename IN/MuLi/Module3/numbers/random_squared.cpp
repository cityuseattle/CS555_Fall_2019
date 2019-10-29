#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int i,j,k;
    srand((unsigned)time( NULL ));
    for(i=0; i<5;i++){
        j=(rand() % 20) + 1;
        cout<<"Random number is: "<< j << " It's square is: "<< pow(j,2)<<endl;
        cout<<"Random number is: "<< j << " It's floored square root is: " <<floor(sqrt(j))<<endl;
    }
    return 0;
}