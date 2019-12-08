#include <iostream>
using namespace std;

int main(){

    int c_age = 10;
    int d_age = 21;
    const int *p = &c_age;
    p =  0 ;
    
    cout<< *p << " " << p << endl;


    return 0;

}

