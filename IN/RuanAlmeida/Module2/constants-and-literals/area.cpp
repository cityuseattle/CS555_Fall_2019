#include <iostream>
using namespace std;

#define NEWLINE '\n' 
#define HORIZONTAL_TAB '\t'
#define VERTICAL_TAB '\v'

/*
class Box {
    public:
        double length;
        double breadth;
        double height;        
};*/

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: " << HORIZONTAL_TAB << VERTICAL_TAB << area << NEWLINE;
    
    return 0;
}