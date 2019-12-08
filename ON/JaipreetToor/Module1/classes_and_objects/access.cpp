#include <iostream>

using namespace std;

class Box {
    public:
    double length;   // Length of a box
    double breadth;  // Breadth of a box
    double height;   // Height of a box
};

int main() {
    Box BoxJaipreet;      // Declare Box1 of type Box
    double volume = 0.0;    // Store the volume of a box here

    // box 1 specification
    Box1.height = 10.0;
    Box1.length = 11.0;
    Box1.breadth = 12.0;

    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume <<endl;

    return 0;
}