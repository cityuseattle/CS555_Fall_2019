#include <iostream>
using namespace std;
#define NEWLINE '\n'
#define HORIZONTAL "\t"
#define VERTICAL "\v"
int main(){
    const int LENGTH = 10;
    const int WDITH = 5;
    int area;

    area  = LENGTH * WDITH;
    cout <<"Area:" << HORIZONTAL << VERTICAL <<area;
    cout << NEWLINE;
    return 0;
}