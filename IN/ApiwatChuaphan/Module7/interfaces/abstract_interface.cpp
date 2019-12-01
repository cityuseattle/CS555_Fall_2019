#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.
    virtual void draw() = 0;
};

class Rectangle : Shape
{
public:
    void draw()
    {
        cout << "drawing rectangle..." << endl;
    }
};

class Circle : Shape
{
public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};

int main()
{
    Rectangle rec;
    rec.draw();

    Circle cir;
    cir.draw();

    return 0;
}