#include <iostream>
using namespace std;

//function declaration
int max (int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

int min (int first, int second){
    int minresult;
    if (first < second){
        minresult = first;
    }
    else
    {
        minresult = second;
    }

    return minresult;
}

int main() {
    //local var declaration:
    int a = 100;
    int b = 200;
    int ret;
    int minNum;

    //calling a func to get max val
    ret = max(a, b);
    minNum = min(a, b);
    cout << "Max value is: " << ret << endl;
    cout << "Min value is: " << minNum << endl;
    
    return 0;
}