#include<iostream>
#include "Area.h"
using namespace std;

void Area::setRectangle(float l,float b)
{
    if(l>0)
    {
        length=l;
        cout<<" length of Rectangle is: "<<length<<"\n";
    }
    else if(l<0)
    {
        cout<<"length cannot be negative so converting to positive\n";
        length=abs(l);
        cout<<" length of Rectangle is: "<<length<<"\n";
    }
    else 
    {
        cout<<"length cannot be 0, so assigning default valus as 1.0\n";
        length=1.0;
        cout<<" length of Rectangle is: "<<length<<"\n";
    }
    if(b>0)
    {
        breadth=b;
        cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
    }
    else if(b<0)
    {
        cout<<"Breadth cannot be negative so converting to positive\n";
        breadth=abs(b);
        cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
    }
    else
    {
        cout<<"breadth cannot be 0, so assigning default valus as 1.0\n";
        breadth=1.0;
        cout<<" Breadth of Rectangle is: "<<breadth<<"\n";
    }
            
}
void Area::setRadius(float r)
{
    if(r>0)
    {
        radius=r;
        cout<<" Radius of Circle is: "<<radius<<"\n";
    }
    else if(r<0)
    {
        cout<<"Radius cannot be negative so converting to positive\n";
        radius=abs(r);
        cout<<" Radius of Circle is: "<<radius<<"\n";
    }
    else
    {
        cout<<"Radius cannot be 0 so assigning default value as 1.0\n ";
        radius=1.0;
        cout<<" Radius of Circle is: "<<radius<<"\n";
    }
}
float Area::getlength()
{
    return length;
}
float Area::getbreadth()
{
    return breadth;
}
float Area::getradius()
{
    return radius;
}
float Area::rectangleArea()
{
    return length*breadth;
}
float Area::circleArea()
{
    return 3.14*radius*radius;
}


