#include <iostream>
using namespace std;

#define Newline '\n'
#define Preprocessor '\t'

int main(){
    const int Length = 10;
    const int Width = 5;
    int area;

    area = Length * Width;
    cout<<"Area: "<<Newline<<Preprocessor<<area;
    return 0;
}