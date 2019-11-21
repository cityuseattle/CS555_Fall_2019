#include <iostream>
using namespace std;

class Shape{
    protected:
    int width; int height;

    public:
    Shape(int a=0, int b=0){
        width=a;
        height=b;
    }
    virtual int area(){
        cout<<"parent class area:  "<<endl;
        return 0;
    }
};

class Rect: public Shape{
    public:
        Rect(int a=0,int b=0): Shape(a,b){ }
        int area(){
            cout<<"rect area:  ";
            return(width * height);
    }
};

class Tri: public Shape{
    public:
        Tri(int a=0,int b=0): Shape(a,b){ }
        int area(){
            cout<<"Tri area:  ";
            return(width * height/2);
    }
};

int main(){
    int area;
    Shape *shape;
    Rect r(10,7);
    Tri t(10,5);
    
    shape=&t;
    area=shape->area();
    cout<<area<<endl;

    shape=&r;
    area=shape->area();
    cout<<area<<endl;
    return 0;
}