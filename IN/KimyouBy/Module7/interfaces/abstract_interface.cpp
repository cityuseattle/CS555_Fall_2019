#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void draw() = 0;
};

class Rectangle : Shape
{
    public:
    void draw()
    {
        cout << "drawing rectangle..." <<endl;
    }
};

//Rename the copied derived class to Circle
class Circle : Shape
{
    public:
    void draw()
    {
        cout << "drawing circle..." <<endl;
    }
};

int main(){
    Rectangle rec;
    rec.draw();

    //create a Circle object
    Circle cir;
    cir.draw();

    return 0;
}