#include <iostream>
using namespace std;

// Base Class
class Shape{
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }

    protected:
        int width;
        int height;
};

// Derived class
class Rectangle: public Shape{
    public:
        int getArea(){
            return (width * height);
        }
};

class Square: public Shape{
    public:
        int getArea(){
            return (width * width);
        }
};

int main(void){
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // Print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;

    Square Sq;
    Sq.setWidth(10);

    cout << "Total area: " << Sq.getArea() << endl;

    return 0;
}