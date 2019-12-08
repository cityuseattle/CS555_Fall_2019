#include <iostream>
using namespace std;

void Swap1(char &a, char &b)

{

    char tmp = a;

    a = b;

    b = tmp;

}

int main(){
    char a = 'y';
    char b = 'n';

    swap1(a,b);

    cout<< a << " " << b << endl ;
}