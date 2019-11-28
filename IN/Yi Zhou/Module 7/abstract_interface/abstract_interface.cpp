#include <iostream>
using namespace std;

class Shape
{
public:
//draw a shape
    virtual void draw() = 0;
};

class Rectangle : Shape
{
    public:
    //draw a rectangle shape
        void draw()
        {
            cout<<"drawing rectangle..."<<endl;
        }
};


class Circle: Shape
{
    public:
    //draw a circle shape
        void draw()
        {
            cout<<"drawing circle..."<<endl;
        }
};

//main function
int main()
{
    Rectangle rec;
    rec.draw();

    Circle cir;
    cir.draw();
    return 0;
}