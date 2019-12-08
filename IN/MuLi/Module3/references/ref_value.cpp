/*References vs Pointers
References are often confused with pointers but three major differences between references and pointers are −
•	You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
•	Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
•	A reference must be initialized when it is created. Pointers can be initialized at any time.*/
#include <iostream>
using namespace std;

int main(){
    int i;
    int& r = i;
    i = 5;
    cout << "Value of i: " << i << endl;
    cout << "Value of i reference: " << r << endl;
    return 0;
}