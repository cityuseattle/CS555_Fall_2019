#include <iostream>
using namespace std;

// Base class
class Shape {
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }


    protected:
        int width;
        int height;
};

//Derived class
class Rectangle: public Shape {
    public:
        int getArea() {
            return (width * height);
        }
};

class Square: public Shape {
    public:
        int getArea() {
            return (width * width);
        }
};

int main(void) {
    Rectangle Rect;
    Square Sq;

    Rect.setWidth(5);
    Rect.setHeight(7);

    Sq.setWidth(10);

    //print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total area: " << Sq.getArea() << endl;

    return 0;
}