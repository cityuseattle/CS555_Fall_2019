#include <iostream>
using namespace std;

#define NEWLINE '\n'

#define HORIZONTALTAB '\t'

const string VERTICALTAB = "\v";
int main(){
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "Area: \v"  <<area;
    cout << NEWLINE;
    return 0;
}