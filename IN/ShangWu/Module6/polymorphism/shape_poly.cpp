#include<iostream>
using namespace std;

class Shape {
    protected:
    int width, height;

    public:
    Shape(int a =0, int b = 0){
        width = a;
        height = b;
    }
    virtual int area() {
        cout << " Parent class area: " << endl;
        return 0;
    }
};

class Rectangle: public Shape {
    public:
    Rectangle( int a =0, int b = 0):Shape(a,b){ }

    int area () {
        cout << "Rectangle class area: ";
        return (width * height);
    }
};

int main() {
    int area;
    Shape *shape;
    Rectangle rec(10,7);

    shape = &rec;
    area = shape->area();
    cout << area << endl;
    return 0 ;
}