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
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box 1 : " << volume << endl;

    Box JiongjieBox;

    JiongjieBox.height = 10.0;
    JiongjieBox.length = 11.0;
    JiongjieBox.breadth = 12.0;

    volume = JiongjieBox.height * JiongjieBox.length * JiongjieBox.breadth;
    cout << "Volume of JiongjieBox :" << volume << endl;

    return 0;
}