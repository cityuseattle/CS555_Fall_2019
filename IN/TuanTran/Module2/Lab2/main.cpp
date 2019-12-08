#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
    Rectangle rec1(5,2.5);              //Create object rec1
    Rectangle rec2(5, 18.9);            //Create object rec2
    if (rec1.sameArea(rec2)==1){        //Check if rec2 equal rec1
        cout << ("Rectangle 1 and 2 have same area") << endl;}  //Print out message
    else{
        cout << ("Rectangle 1 and 2 do not have same area") << endl; //Print out message
    }
    rec1.setlength(15); // Set new length to rec1
    rec1.setwidth(6.3); //Set new width to rec1
    
    cout << ("Rectangle 1 dimensions")<<endl;
    rec1.show();                                        //Print out new dimension of rec1 
    cout << ("Rectangle 2 dimensions")<< endl;
    rec2.show();
    
    
    if (rec1.sameArea(rec2)==1){                                // Check if rec1 are equal rec2 again
        cout << ("Rectangle 1 and 2 have same area")<< endl;}
    else{
        cout << ("Rectangle 1 and 2 do not have same area")<< endl;
}
}