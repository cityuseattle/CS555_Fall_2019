#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define HORIZONTAL_TAB '\t'

int main()
{
    const int length = 10;
    const int width = 5;
	const char vertical_tab = '\v';
    int area;


    area = length * width;
    cout << " Area: ";
    cout << vertical_tab << HORIZONTAL_TAB << area;
    cout << NEWLINE;
    return 0;
}