#include <iostream>
#include <string>
using namespace std;

#define NEWLINE '\n'
#define HORIZONTAL '\t'

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const string VerticalTab = "\v";
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << HORIZONTAL << VerticalTab << area;

    return 0;
}