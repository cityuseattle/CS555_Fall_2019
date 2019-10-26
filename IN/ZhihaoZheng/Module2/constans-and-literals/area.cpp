#include<iostream>
using namespace std;

#define NEWINE '\n'
#define Newine2 '\t'

int main(){
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area;

    area = LENGTH * WIDTH;
    cout << "area:\v" << Newine2 << area ;
    
    return 0;
}