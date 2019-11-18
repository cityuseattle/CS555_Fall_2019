#include <iostream>
using namespace std;

class Shape{
    public:
    void getWidth(int w){
        width=w;
    }
    void getHeight(int h){
        height=h;
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

int main(){
    Rectangle rect;
    Square sq;

    rect.getWidth(5);
    rect.getHeight(7);
    sq.getWidth(10);

    cout<<"total area: "<<rect.getArea()<<endl;
    cout<<"total area: "<<sq.getArea()<<endl;

    return 0;
}