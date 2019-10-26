#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);
int min(int num1, int num2);

int main(){
    // local variable declaration
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value.
    ret = max(a, b);
    cout << "max value is: " << ret << endl;

    // calling a function to get min value.
    ret = min(a, b);
    cout << "min value is: " << ret << endl;
     



   return 0; 
}

int max (int num1, int num2){
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}

int min (int num1, int num2){
    // local variable declaration
    int result;

    if (num1 < num2)
        result = num1;
    else
        result = num2;
    return result;
}