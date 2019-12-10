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
            return(width * height);
        }
};

class Square: public Rectangle{
    public:
        Square(){
            height = width = 0;
        }
        Square(int w){
            height = width = w;
        }
        void setWidth(int w){
            width = height = w;
        }
        int getArea(){
            return(width * width);
        }
};
int main(){
    Rectangle rect;
    
    rect.setHeight(7);
    rect.setWidth(5);

    cout <<"Total area: "<<rect.getArea()<<endl;

    Square squ;
    squ.setWidth(10);

    cout <<"Total area: "<<squ.getArea()<<endl;
    return 0;
}