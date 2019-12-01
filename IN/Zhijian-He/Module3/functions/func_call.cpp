#include <iostream>
using namespace std;

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    int a = 100;
    int b = 200;
    int ret;
    int Min;

    Min = min(a, b);
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;
    cout << "Min value is : " << Min << endl;
    return 0;
}

int max (int num1, int num2) {
    int result;

    if(num1 > num2)
    result = num1;
    else
    {
        result = num2;

        return result;
    }
    
}

int min (int num1, int num2) {
    int result1;

    if(num1< num2)
    result1 = num1;
    else{
        result1 = num2;

        return result1;
    }
}