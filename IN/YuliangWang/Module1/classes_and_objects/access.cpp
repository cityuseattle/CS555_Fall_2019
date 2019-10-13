#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
};

int main()
{
    Box Box1;
    double volume=0.0;

    Box1.height=5.0;
    Box1.length=6.0;
    Box1.breadth=7.0;

    Box YuliangBox;
    double volume1=0.0;

    YuliangBox.breadth=12.0;
    YuliangBox.height=10.0;
    YuliangBox.length=11.0;

    volume1= YuliangBox.breadth * YuliangBox.height * YuliangBox.length;
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1: " << volume << endl;
    cout << "Volume of YuliangBox: " << volume1 << endl;

    return 0;
}