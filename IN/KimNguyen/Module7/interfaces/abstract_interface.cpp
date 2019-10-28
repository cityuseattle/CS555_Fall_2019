#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw() = 0;
};

class Rectangle: Shape{
    public:
    void draw(){
        cout << "Drawing rectangle..." << endl;
    }
};

class Circle: Shape{
    public:
    void draw(){
        cout << "Drawing circle..." << endl;
    }
};

int main(){
    Rectangle rec;
    Circle cir;

    rec.draw();
    cir.draw();
    
    return 0;
}