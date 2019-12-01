#include <iostream>
using namespace std;

class Shape{
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height =h;
        }
    protected:
        int width;
        int height;
};
class Square:public Shape{
    public:
        int getArea(){
            return (width*width);
        }
};

class Rectangle:public Shape{
    public:
        int getArea(){
            return (width*height);
        }
};

int main(void){
    Rectangle Rect;
    Square Sq;
    Rect.setWidth(5);
    Rect.setHeight(7);
    Sq.setWidth(10);
    cout<<"Total area:"<< Rect.getArea()<<endl;
    cout<<"Total area:"<< Sq.getArea()<<endl;
}