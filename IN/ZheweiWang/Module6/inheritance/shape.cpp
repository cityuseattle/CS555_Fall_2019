#include <iostream>
using namespace std;
//Base class
class Shape{
public:
void setwideth(int w){
    width = w;
}
void setHeight(int h){
    height =h;
}
protected:
int width;
int height;
};

class Rectangle: public Shape{
    public:
    int getArea(){
        return(width*height);
    }
};

class Square: public Shape{
    public:
    int getArea(){
        return(width*width);
    }
};

int main(void){
    Rectangle Rect;
    Square sq;
    sq.setwideth(10);
    Rect.setwideth(5);
    Rect.setHeight(7);
    cout<<"Total area of Rectangele: "<<Rect.getArea()<<endl;
    cout<<"Total area of Square: "<<sq.getArea()<<endl;
    return 0;
}