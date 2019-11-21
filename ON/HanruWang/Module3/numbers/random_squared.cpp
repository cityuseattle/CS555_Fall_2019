#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int j , i;
    srand((unsigned)time(NULL));

    for( i = 0; i < 5; i++) {
        j = sqrt(rand());
        cout << "Random number: " << floor(j) << endl;
    }
    return 0;
}
