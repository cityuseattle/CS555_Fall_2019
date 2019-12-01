#include <iostream>
using namespace std;

class Shape
{
     public:
     virtual void draw()=0;
};

class Rectangle: public Shape
{
    public:
    void draw()
    {
        cout<<"drawing rectangle.."<<endl;
    }

   
};

class Circle: public Shape
{
    public:
    void draw()
    {
        cout<<"drawing circle.."<<endl;
    }

   
};

int main()
{
    Rectangle rect;
    rect.draw();

    Circle cir;
    cir.draw();
}