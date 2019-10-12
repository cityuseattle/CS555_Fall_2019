#include <iostream>
using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;

};

int main(){
    Box Box1;
    double volume = 0.0;
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 :" << volume << endl;

    //My volume of box 
    Box Box2;
    double myvolume = 0.0;
    Box2.breadth = 12.0;
    Box2.height = 10.0;
    Box2.length = 11.0;

    myvolume = Box2.breadth * Box2.height * Box2.length;
    cout << "my volume of box:" << myvolume << endl;

    // volueme of my box
    
    return 0;
}