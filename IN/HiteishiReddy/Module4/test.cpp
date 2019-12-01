#include <iostream>
#include <cstring>

using namespace std;


void doubleIt(int x, int *p)

{

    cout << "before " << p << " " << *p << endl;

    *p = 2 * x;

    cout << "after " << p << " " << *p << endl;

}

int main(){
    int a = 16;
    doubleIt(9,&a);
    cout << "in main()" << a << " " << &a << endl;
}
