#include <iostream>
using namespace std;

//#define NEWLINE '\n'
#define HORIZONTAL '\t'

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char vertab = '\v';
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: " << vertab << HORIZONTAL<< area;
    //cout << NEWLINE;
    return 0;
}