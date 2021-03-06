#include<iostream>
using namespace std;
class Shape{
    public:
    void setWidth(int w){
        width=w;
    }
    void setHeight(int h){
        height=h;
    }
    protected:
    int width;
    int height;
};
class Rectangle: public Shape{
    public:
    int getArea(){
        return (width*height);
    }
};
class Square: public Shape{
    public:
    int getArea(){
        return (width*width);
    }
};
int main(void){
    Rectangle rec;
    Square sq;
    rec.setWidth(5);
    rec.setHeight(7);
    sq.setWidth(10);
    cout<<"Total area: "<<rec.getArea()<<endl;
    cout<<"Total area: "<<sq.getArea()<<endl;
    return 0;
}