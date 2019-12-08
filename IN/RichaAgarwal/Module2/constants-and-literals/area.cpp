#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define Horizintal '\t'
#define vertical '\v'

int main(){
    const int Length = 10;
    const int Width = 5;
    int area;

    area = Length * Width;
    cout << "Area:" << area;
    cout << "Horizental" << Horizintal <<area;
    cout << "Vertical" << vertical  << area;
    cout << Horizintal;
    cout << vertical;
    return 0;
}