#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define HorizontalTab '\t' 
int main() {
    const int len=10;
    const int width=5;
    const char VerticalTab= '\v'; 
    int area;

    area=len *width;
    cout <<"Area: "<<NEWLINE<<HorizontalTab<<VerticalTab<<area;
   // cout<<HorizontalTab;
    //cout <<NEWLINE;
    
    return 0;



}