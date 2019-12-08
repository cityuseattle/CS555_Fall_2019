#include<iostream>
using namespace std;
class Shape
{
public:
 void setWidth(int w)
 {
     Width = w;
 }

 void setHeight(int h)
 {
     Height = h;
 }

 protected:
 int Width;
 int Height;
};

class Rectangle : public Shape
{
    public:
     int getArea()
     {
         return (Width * Height);
     }

};

class Square : public Shape
{
    public:
     int getArea()
     {
         return (Width * Width);
     }

};

int main()
{
    Rectangle Rect;
    Square Sq;

    Rect.setHeight(7);
    Rect.setWidth(5);

    Sq.setWidth(10);

    cout << " Total area : " << Rect.getArea() << endl;
    cout << " Total area : " << Sq.getArea() << endl;

    return 0;
}