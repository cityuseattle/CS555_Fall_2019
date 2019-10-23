#include <iostream>
#include <string>
using namespace std;

#define NEWLINE '\n'

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const string VerticalTab = "\t";
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << NEWLINE << VerticalTab << area;

    return 0;
}