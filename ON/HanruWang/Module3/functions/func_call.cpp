#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int b = 200;
    int ret, res;

    ret = max(a, b);
    res = min(a, b);
    cout << "Max value is : " << ret << endl;
    cout << "Min value is : " << res << endl;
    min(a, b);

    return 0;
}

int max(int num1, int num2) {
    int res;
    if(num1 > num2) res = num1;
    else res = num2;
    return res;
}

int min(int num1, int num2) {
    int res;
    if(num1 > num2) res = num2;
    else res = num1;
    return res;
}