#include <iostream>
using namespace std;

int main(){
    int i; // declare simple variable
    int& r = i; // declare refernec variables
    i = 5;
    cout << "Value of i: " << i << endl;
    cout << "Value of i refence: " << r << endl;
    return 0;
}