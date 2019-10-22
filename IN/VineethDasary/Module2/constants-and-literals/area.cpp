#include <iostream>
using namespace std;

#define NEWLINE '\n'

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "area: " << area;
    cout << NEWLINE;
    return 0;
}