#include <iostream>
using namespace std;

class Shape {
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeighth(int h) {
            heighth = h;
        }

    protected:
        int width;
        int heighth;
};

class Rectangle: public Shape {
    public:
        int getArea() {
            return (width * heighth);
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
    Rect.setWidth(5);
    Rect.setHeighth(7);

    cout << "Total area: " << Rect.getArea() << endl;

    Square Squa;
    Squa.setWidth(10);
    cout << "Total area: " << Squa.getArea() << endl;
    
    return 0;
}