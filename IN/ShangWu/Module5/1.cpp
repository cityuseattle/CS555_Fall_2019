#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int A[5] = {-1,2,10,16,5};
    int B[5] = {10,11,6,7,7};

    int targetNum = 22;
    int closestNum = A[0] + B[0];
 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <5; j++) {
            if(abs(targetNum - A[i] - B[j]) < abs(targetNum - closestNum)){
                closestNum = A[i] + B[j];
            }
        }
    }
    cout << "The closest number is : " << closestNum << endl;

    for (int n = 0; n < 5; n++){
        for (int m = 0; m <5; m++){
            if(abs(A[n] + B[m]) == closestNum){
                cout << "The closest pair is : " <<"A: "<<A[n]<<"B: "<< B[m]<< endl;
            }
            
        }
    }
    



}