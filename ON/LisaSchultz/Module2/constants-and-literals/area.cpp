#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HTAB '\t'
#define VTAB '\v'

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: " << VTAB << HTAB; 
    cout << area;
    cout << NEWLINE;
    return 0;
}