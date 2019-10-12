#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main() {
    Box Box1;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.breadth = 6.0;
    Box1.length = 7.0;

    volume = Box1.height * Box1.breadth * Box1.length;

    cout << "Volume of Box1 is: " << volume << endl;

    Box HanruBox;

    double volume_hanru = 0.0;

    HanruBox.height = 10.0;
    HanruBox.breadth = 12.0;
    HanruBox.length = 11.0;

    volume_hanru = HanruBox.height * HanruBox.breadth * HanruBox.length;

    cout << "Volume of HanruBox is: " << volume_hanru << endl;

    return 0;

}