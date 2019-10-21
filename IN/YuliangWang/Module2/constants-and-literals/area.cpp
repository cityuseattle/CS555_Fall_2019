#include<iostream>
using namespace std;

#define NEWLINE '\n'
#define Tab '\t'


int main()
{
    const int length = 10;
    const int width = 5;
    const string t = "\t";
    int area;

    area = length *width;
    cout << "Area: "<< NEWLINE + t + to_string(area);
    cout << NEWLINE;
    return 0;
}