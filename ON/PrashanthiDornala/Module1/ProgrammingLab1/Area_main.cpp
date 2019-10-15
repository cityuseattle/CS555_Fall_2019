#include <iostream>
#include "Area.h"
using namespace std;

int main()
{
    Area area1;
    int number,option;
    option=1;
    while(option==1)
    {
        cout<< "Select option 1 or 2 \n 1. Rectangle\n 2. Circle \n";
        cin>>number;
        if(number==1 || number==2)
        {
            option=0;
        }
        else
        {
            cout<<"Incorrect entry, Enter option 1 or 2\n";
        }
        
    }
    
    if(number==1)
    {
        float l,b,r;
        cout<<"Enter length of Rectangle: ";
        cin >>l;
        cout<<"Enter breadth of Rectangle: ";
        cin >>b;
        
        area1.setRectangle(l,b);
        cout<<"Area of Rectangle is: " <<area1.rectangleArea();
    }
    else if(number==2)
    {
        float r;
        cout<<"Enter radius of circle: ";
        cin>>r;
        area1.setRadius(r);
        cout<<"Area of Circle is: "<<area1.circleArea();
    }
    
}

