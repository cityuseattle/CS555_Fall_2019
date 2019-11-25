#include <iostream>
using namespace std;

class Shape {
    public:
    virtual void draw() = 0;
};

class Rectangle : Shape {
    public:
    void draw() {
        cout << "Drawing a rectangle..." << endl;
    }
};

class Circle : Shape {
    public:
    void draw() {
        cout << "Drawing a circle..." << endl;
    }
};

int main() {
    Rectangle rec;
    rec.draw();
    Circle cir;
    cir.draw();
    return 0;
}