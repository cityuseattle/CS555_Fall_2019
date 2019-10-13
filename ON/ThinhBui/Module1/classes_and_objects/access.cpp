#include <iostream>
using namespace std;
class Box {
    public:
        double length;
        double breadth;
        double height;
};

class ThinhBox {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box Box1;
    ThinhBox Box2;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1: " << volume << endl;
    Box2.height = 10.0;
    Box2.length = 11.0;
    Box2.breadth = 12.0;
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Volume of Box2: " << volume << endl;
    return 0;
}