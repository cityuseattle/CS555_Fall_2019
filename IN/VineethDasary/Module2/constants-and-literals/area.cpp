#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HTAB '\t'

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char VTAB = '\v';
    int area;

    area = LENGTH * WIDTH;
    cout << "area:" << HTAB << VTAB << area;
    cout << NEWLINE;
    return 0;
}