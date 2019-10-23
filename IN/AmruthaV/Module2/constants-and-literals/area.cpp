#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define Horizontal '\t'
#define vertical '\v'

int main(){
    const int Length = 10;
    const int Width = 5;
    int area;

    area = Length * Width;
    cout << "Area:"<< Horizontal << vertical << area <<"\n";
    return 0;
}