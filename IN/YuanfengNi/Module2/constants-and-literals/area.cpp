#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define Horizeontal_tab '\t'
int main(){
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char Vertical_tab = '\v';
    int area;
    area = LENGTH * WIDTH;
    cout<<"Area: "<<Horizeontal_tab<<Vertical_tab<<area;
    cout<< NEWLINE;
    return 0;
}
