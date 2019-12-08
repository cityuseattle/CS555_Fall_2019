#include <iostream>
using namespace std;

class shape{
    public:
    int width, height;

    shape(int a=0, int b=0){
        width=a;
        height=b;
    }

    virtual int area(){
        cout<<"parent class area: "<<endl;
        return 0;
    }
};

class Rectangle:public shape{
    public:
    Rectangle(int a=0, int b=0):shape(a,b){ }

    int area(){
        cout<<"rectangle area: ";
        return (width*height);
    }
};

class Triangle:public shape{
    public:
    Triangle(int a=0, int b=0):shape(a,b){ }

    int area(){
        cout<<"triangle area: ";
        return (width*height/2);
    }
};

int main(){
    int area;
    shape *shape;
    Rectangle rect(10,7);
    shape=&rect;
    area=shape->area();
    cout<<"rectangle class area: "<<area<<endl;

    Triangle tri(10,5);
    cout<<"triangle class area: "<<tri.area()<<endl;
}