#include <iostream>

using namespace std;

class Box{
    public:
       double length;
       double breadth;
       double height;
};

int main() {
    Box Box1;
    Box Richa;
    double volume = 0.0;

    Box1.breadth = 5.0;
    Box1.length = 6.0;
    Box1.height = 7.0;

    Richa.breadth = 10.0;
    Richa.height = 11.0;
    Richa.length = 12.0;

    volume = Box1.breadth * Box1.height * Box1.length;
    cout << "Volume of Box1 : " << volume << endl;

    volume = Richa.breadth * Richa.height * Richa.length;
    cout << "Volume of RichaBox :" << volume << endl;

    return 0;
}
