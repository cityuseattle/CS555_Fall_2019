#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HORIZONTALTAB '\t'


int main() {

    const int LENGTH = 10;
    const int WIDTH = 5;
    const char VERTICAL = '\v';
    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << HORIZONTALTAB << VERTICAL << area; //change this code
    cout << NEWLINE;
    
    return 0;
}