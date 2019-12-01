#include <iostream>
using namespace std;

class shape {
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

class Rectangle: public shape {
    public:
     int getArea() {
         return (width * height);
     }
};

class Square: public shape {
    public:
      int getArea1() {
          return (width * width);
      }
};

int main(void) {
    Rectangle Rect;
    Square sq;

    Rect.setWidth(5);
    Rect.setHeight(7);
    sq.setWidth(10);
    sq.setHeight(10);

    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total area: " << sq.getArea1() << endl;

    return 0;
}