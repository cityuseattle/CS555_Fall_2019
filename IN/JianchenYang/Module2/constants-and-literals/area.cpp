#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define preprocessor '\t'


int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;

    int area;

    area = LENGTH * WIDTH;
    cout << "Area:" << NEWLINE << preprocessor << area ;
    return 0;
}