#include <iostream>
using namespace std;

// Base class
class Shape{
    public:
        Shape(int a = 0, int b = 0){
            width = a;
            height = b;
        }
        virtual int area(){
            cout << "Parent class area: " << endl;
            return 0;
        }
    protected:
        int width;
        int height;
};

// Derived class
class Rectangle : public Shape{
    public: 
        Rectangle(int a, int b = 0):Shape(a,b){}

        int area(){
            cout << "Rectangle class area: ";
            return (width * height);
        }
};

// Derived class
class Triangle : public Shape{
    public: 
        Triangle(int a, int b = 0):Shape(a,b){}

        int area(){
            cout << "Triangle class area: ";
            return (width * height / 2);
        }
};

int main(void){
    int area;
    Shape *shape;
    Rectangle rec(10, 7);

    shape = &rec; // store the address of Rectangle
    area = shape->area(); // call rectangle area

    cout << area << endl;

    Shape *tri;
    Triangle rec2(10, 5);

    tri = &rec2; // store the address of Triangle
    area = tri->area(); // call Triangle area

    cout << area << endl;
    return 0;
}