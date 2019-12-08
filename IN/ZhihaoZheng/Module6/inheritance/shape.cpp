#include <iostream>
using namespace std;

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


class Rectangle: public Shape{
    public:
     int getArea(){
         return (width * height);
     }
};

class Square: public Rectangle{
    public:
    int getArea(){
        return (width*width);
    }
};

int main(void){
    Rectangle Rect;
    Square Sq;
    Sq.setWidth(10);
    Rect.setWidth(5);
    Rect.setHeight(7);

    cout << "Area:" << Rect.getArea() << endl;
    cout << "Sq area:" << Sq.getArea() << endl;
    return 0;
}