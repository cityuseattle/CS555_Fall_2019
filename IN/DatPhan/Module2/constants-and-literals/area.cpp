#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HORIZONTAL_TAB '\t'

int main(){
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char VERTICAL_TAB = '\v';
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: " << HORIZONTAL_TAB << VERTICAL_TAB << area;
    cout << NEWLINE;
    return 0;
}