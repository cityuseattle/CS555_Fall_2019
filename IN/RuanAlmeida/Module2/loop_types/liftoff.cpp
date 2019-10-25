#include <iostream>
using namespace std;

int main() {
    int n = 10;

    do {
      cout << n << ", ";
      n = n - 2;      
    } while (n > 2);

    /*
    for(int i=0; i<5; i++) {
       counter();
    }
*/

    cout << "liftoff!\n";
}