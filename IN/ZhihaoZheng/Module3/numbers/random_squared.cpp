#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using  namespace std;

int main (){
    int i,j;
    srand((unsigned)time (NULL));

    for( i = 0; i < 5; i ++){
        j = (rand() % 20) + 1; 
        cout << "random Number :" << pow(j,2) << endl;
        double k;
        k = sqrt(j);
        cout << "square is :" << pow(k,2) << endl;
        }
        return 0;

}