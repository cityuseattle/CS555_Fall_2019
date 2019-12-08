#include <iostream>
using namespace std;

// function declaration
int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    // local variable declaration:
    int a = 100;
    int b = 200;
    int ret;
    int retMin;

    // calling a function to get max value
    ret = max(a, b);
    cout << "Max value is: " << ret << endl;

    retMin = min(a, b);
    cout << "Min value is: " << retMin << endl;

    return 0;
}

int max(int num1, int num2) {
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;
    
    return result;
}

int min(int num1, int num2) {
    // local variable declaration
    int resultMin;

    if (num1 < num2)
        resultMin = num1;
    else
        resultMin = num2;
    
    return resultMin;
}