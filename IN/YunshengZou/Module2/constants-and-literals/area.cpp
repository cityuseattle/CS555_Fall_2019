#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HORIZONTAL '\t'//preprocess the horizontal tab

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char VERTICAL = '\v';//use the const keyword and assign the vertical tab
    int area;

//modify the code and follow the request to output
    area = LENGTH * WIDTH;
    cout << "Area:" << HORIZONTAL << VERTICAL;
    cout << area;
    cout << NEWLINE;
    return 0;
}