#include <iostream>
using namespace std;

int main (){
    int i;
    int& r = i;
    i = 5;
    cout << "value of i:" << i << endl;
    cout << "value of i reference:" << r << endl;
    return 0;
    
}