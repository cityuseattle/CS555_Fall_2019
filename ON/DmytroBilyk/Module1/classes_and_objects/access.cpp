#include <iostream>

using namespace std;

class Box {
    public:
    double length;  // Length of a box
    double breadth;  // Breadth of a box
    double height;  // Height of a box
};

int main(){
    Box Box1;   // Declate Box1 of type Box
    Box DmytroBox;
    double volume = 0.0;    // Store the volume of a box here
    double dmytroVolume = 0.0;
    
    // box 1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume << endl;

    // box 2 specification
    DmytroBox.height = 10.0;
    DmytroBox.length = 11.0;
    DmytroBox.breadth = 12.0;

    // volume of box 2
    dmytroVolume = DmytroBox.height * DmytroBox.length * DmytroBox.breadth;
    cout << "Volume of DmytroBox : " << dmytroVolume << endl;

    return 0;
}