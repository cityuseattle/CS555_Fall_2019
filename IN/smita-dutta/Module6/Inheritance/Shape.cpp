#include<iostream>
using namespace std;


class Shape
{
     public:
     void SetWidth(int w)
     {
       
       width=w;

     }
     void SetHeight(int h)
     {

        height=h;
     }

     protected:
     int width;
     int height;
};

class Rectangle: public Shape
{
    public:
    int GetArea()
    {
        return width*height;
    }
};

class Square:public Shape
{

    public:
    int GetArea()
    {
        return width* width;

    }

};

int main()
{    
    Rectangle rect;
    rect.SetHeight(7);
    rect.SetWidth(5);
    cout<< "Total area " << rect.GetArea() << endl;

    Square square;
    square.SetWidth(10);
    cout<< "Total area " << square.GetArea() << endl;

     return 0;


 
}