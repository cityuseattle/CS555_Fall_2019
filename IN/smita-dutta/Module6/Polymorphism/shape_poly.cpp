#include<iostream>
using namespace std;

class Shape
{
     public:
     Shape(int a=0 , int b =0)
     {
         width=a;
         height=b;
     }
     
     int virtual GetArea()
     {
         cout<<"Parent class area" <<endl;
         return 0;
     }

     protected:
     int width;
     int height;
};

class Rectangle: public Shape
{
    public:

    Rectangle( int a=0 , int b=0):Shape(a,b){}

    int GetArea()

    {    cout<<"Rectangle class area: " ;
         return (width*height);
    }
};

class Triangle: public Shape
{
    public:

    Triangle( int a=0 , int b=0):Shape(a,b){}

    int GetArea()

    {    cout<<"Triangle class area: " ;
         return (width*height) /2;
    }
};

int main()
{   
    int area;
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10 , 5);
    shape =&rec;
    area= shape->GetArea();
    cout<< area <<endl;
    shape=&tri;
    area=shape->GetArea();
    cout<< area <<endl;


    return 0;
}