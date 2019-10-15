#include <iostream>
using namespace std;
int main(){
    int a ;
    
    cout << "please choice 1 or 2"<< endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "choice 1"<< endl;
        break;
    case 2:
        cout << "choice 2"<< endl;
        break;
    default:
        break;
    }
    cout << "hello"<< endl;
}