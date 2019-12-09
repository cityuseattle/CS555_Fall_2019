#include <iostream>
using namespace std;

class Shape {
    protected:
        int width, height;

    public:
        Shape( int a = 0, int b = 0) {
            width = a;
            height = b;
        }
        virtual int area() {
            cout << "Parent class area: " << endl;
            return 0;
        }
};

class Rectangle: public Shape {
    public:
        Rectangle( int a = 0, int b = 0):Shape(a,b) { }

        int area () {
            cout << "Rectangle class area: ";
            return (width * height);
        }
};

class Triangle: public Shape {
    public:
        Triangle( int a = 0, int b = 0):Shape(a,b) { }

        int area () {
            cout << "Triangle class area: ";
            return (width * height / 2);
        }
};

int main() {
    int area;
    Shape *shape;
    Shape *shape2;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec; // store the address of Rectangle object
    area = shape->area(); // call rectangle area member function
    cout << area << endl;

    shape2 = &tri;  // store the address of Triangle object
    area = shape2->area(); // call triangle area member function
    cout << area << endl;
    
    return 0;
}