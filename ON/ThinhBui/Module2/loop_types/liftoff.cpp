#include <iostream>
using namespace std;
int main(){
    int n = 10;
    while (n >= 4){
        cout << n << ", ";
        n = n-2;
    }
    cout << "liftoff!\n";
    return 0;
}