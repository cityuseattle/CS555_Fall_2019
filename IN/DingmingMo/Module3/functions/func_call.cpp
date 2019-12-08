#include <iostream>
using namespace std;

int max(int num1, int num2);
int min(int num1, int num2);

int main(){
    int a = 100;
    int b = 200;
    int ret;

    ret = max(a, b);
    cout << "max value is: " << ret << endl;
    ret = min(a, b);
    cout << "min value is: " << ret << endl;
 
   return 0; 
}

int max (int num1, int num2){
    int result;
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}

int min (int num1, int num2){
    int result;
    if (num1 < num2)
        result = num1;
    else
        result = num2;
    return result;
}