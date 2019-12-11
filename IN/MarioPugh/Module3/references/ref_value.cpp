#include <iostream>
using namespace std;

int main () {
    int i;
    int& r = i;
    i = 5;
    cout << "Value of 1 ; " << i << endl;
    cout << "Value of i reference : " << r << endl;
    return 0;
}