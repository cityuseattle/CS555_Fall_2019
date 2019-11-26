#include <iostream>
using namespace std;

class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {}

    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}

    int area()
    {
        cout << "Triangle class area :" << endl;
        return (width * height / 2);
    }
};

// Main function for the program
int main()
{
    int area;
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    shape = &rec;         // store addr of rectangle
    area = shape->area(); // call rectangle area
    cout << area << endl;

    shape = &tri;         // store addr of tri
    area = shape->area(); // call tri area
    cout << area << endl;

    return 0;
}