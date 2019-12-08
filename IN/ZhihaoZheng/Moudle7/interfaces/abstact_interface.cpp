#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw()=0;
};

class Rectangle : Shape
{
    public:
    void draw()
    {
        cout << "Drawing rectangle.. " << endl;
    }
};

class Cirele : Rectangle
{
    public:
    void draw()
    {
        cout << "Drawing circle.. " << endl;
    }
};

int main ()
{
    Cirele cir;
    Rectangle rec;
    cir.draw();
    rec.draw();
    return 0;
}