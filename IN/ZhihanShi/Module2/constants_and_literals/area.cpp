#include <iostream>
using namespace std;

#define NEWLINE "\n"
#define horizontal "\t"

int main(){
    const int LENGTH =  10;
    const int WIDTH = 5 ;
    const char VERTICAL = '\v';
    int area;

    area = LENGTH *WIDTH;
    cout << "Area:" << NEWLINE ;
    cout << horizontal <<area;
    cout << NEWLINE;
    return 0;
}