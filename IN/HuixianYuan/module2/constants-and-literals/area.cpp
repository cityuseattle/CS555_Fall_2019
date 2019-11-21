#include <iostream>
#include <string>
using namespace std;

#define NEWLINE '\n'
#define HORIZONTALTAB '\t'

int main(){
    const int LENGTH=10;
    const int WIDTH=5;
    const string VERTIALTAB ="\v";
    int area;

    area=LENGTH*WIDTH;
    cout<<"area: "<<HORIZONTALTAB<<VERTIALTAB<<area<<endl;
    cout<<NEWLINE;

    return 0;
}