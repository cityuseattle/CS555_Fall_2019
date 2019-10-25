#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define Horizontal '\t'

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char Vertical = '\v';
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:"  << Horizontal << Vertical << area ;

    return 0;
}