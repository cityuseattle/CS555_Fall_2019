#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define NEWTAB '\t'

int main(){
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: " << area;
    cout << NEWTAB;
    return 0;
}