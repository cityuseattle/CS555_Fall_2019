#include <iostream>
using namespace std;

int max(int num1, int num2);
int min(int num1, int num2);

int main () {
    
    int a = 100;
    int b = 200;
    int retMax, retMin;
    retMax = max(a,b);
    retMin = min(a,b);
    cout << "Max Value is : " << retMax << endl;
    cout << "Min Value is : " << retMin << endl;
    
}

int max(int num1, int num2) {
     int result;

    if (num1 > num2) 
       result = num1;
     else 
       result = num2;

    return result;
}

int min(int num1, int num2) {
    int result;

    if(num1 <  num2)
      result = num1;
    else
      result = num2;

    return result;    
}