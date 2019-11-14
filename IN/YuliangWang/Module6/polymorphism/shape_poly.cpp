#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width, height;

    public:
        Shape(int a =0, int b = 0)
        {
            width =a;
            height = b;;
        }

        virtual int area()
        {
            cout<< "Parent class area: "<< endl;
            return 0;
        }

};

class Rectangle: public Shape
{
    public:
        Rectangle(int a =0, int b = 0):Shape(a, b){}
        int area()
        {
            cout<< "Rectangle class area: ";
            return (width*height);
        }
};

class Triangle: public Shape
{
    public:
        Triangle(int a = 0, int b = 0 ):Shape(a,b){}
        int area()
        {
            cout<< "Triangle class area: ";
            return (width*height/2);
        }
};
int main()
{
    int area;
    Shape *shape;
    Rectangle rec(10,7);

    shape = &rec;//store the address of Rectangle;
    area = shape->area();// call rectangle area;
    cout<< area<< endl;

    int Area;
    Shape *sha;
    Triangle tri(10,5);

    sha = &tri;
    Area = sha->area();
    cout<< Area<< endl;
    return 0 ;
}