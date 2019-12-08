#include <iostream>
using namespace std;

#define NEWLINE '\n'

#define Horizontal_Tab '\t'

int main()
{
    const int LENGTH = 10;
    const int WIDETH = 5;
    const char Vertical_Tab = '\v';
    int area;

    area = LENGTH * WIDETH;
    cout << "Area is: " << Horizontal_Tab << Vertical_Tab << area;

    cout << NEWLINE;

    return 0;
}