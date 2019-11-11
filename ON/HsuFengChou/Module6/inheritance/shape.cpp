#include <iostream>
using namespace std;

//Base Class
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

//Derived Class
class Rectangle: public Shape{
    public:
        int getArea(){
            return (width * height);
        }   
};

//Derived Square Class
class Square: public Shape{
    public:
        int getArea(){
            return (width * width);
        }   
};

int main(void){
    Rectangle Rect;
    Square Squ;

    Rect.setWidth(5);
    Rect.setHeight(7);

    Squ.setWidth(10);

    //Print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total area: " << Squ.getArea() << endl;

    return 0;
}