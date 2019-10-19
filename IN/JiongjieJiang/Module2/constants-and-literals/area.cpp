#include <iostream>
using namespace std;

#define NEWLINE '\n'

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << NEWLINE << "        " << area;

    return 0;
}