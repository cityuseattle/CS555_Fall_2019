#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void draw()=0;
};

class Rectangle : shape
{
    public:
    void draw()
    {
        cout << "drawing rectangle...." << endl;
    }

};

class Circle : shape
{
    public:
    void draw()
    {
        cout << "drawing Circle...." << endl;
    }

};

int main() {
    Rectangle rec;
    Circle cir;
    cir.draw();
    rec.draw();
    return 0;
}