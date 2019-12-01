#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw()=0;
};

class Rect : Shape{
    public:
    void draw(){
        cout<<"drawing rect"<<endl;
    }
};

class Circle : Shape{
    public:
    void draw(){
        cout<<"drawing circle"<<endl;
    }
};

int main(){
    Rect r;
    Circle cir;
    r.draw();
    cir.draw();
    return 0;
}