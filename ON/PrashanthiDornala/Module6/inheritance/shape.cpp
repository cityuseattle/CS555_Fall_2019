#include <iostream>
using namespace std;

class Shape
{
    public: 
        void setWidth(int w)
        {
            width=w;
        }
        void setHeight(int h)
        {
            height=h;
        }
    protected:
        int width;
        int height;
};

class Rectangle:public Shape
{
    public:
        int getArea()
        {
            return (width*height);
        }
};

class Square:public Shape
{
    public:
        int getArea()
        {
            return (width*width);
        }
};

int main()
{
    Rectangle Rect;
    Square sq;

    Rect.setWidth(5);
    Rect.setHeight(7);

    sq.setWidth(10);

    cout << "Total area: "<<Rect.getArea() << endl;
    cout << "Total Area: "<<sq.getArea() << endl;
    return 0;
}