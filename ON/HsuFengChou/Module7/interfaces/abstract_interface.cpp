#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw() = 0;
};

class Rectangle
{
    public:
    void draw()
    {
        cout << "drawing rectangle..." << endl;
    }
};

class Circle
{
    public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};

int main ()
{
    Rectangle rec;
    rec.draw();
    Circle cir;
    cir.draw();
    return 0;
}