#include <iostream>

using namespace std;

#define NEWLINE '\n'
#define HORIZONTALTAB '\t'

int main() {
    const int LENGTH = 10;
    const int WIDTH  = 5;
    const char VERTICALTAB = '\v'; 
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << VERTICALTAB;
    cout << HORIZONTALTAB << area;
    return 0;
}