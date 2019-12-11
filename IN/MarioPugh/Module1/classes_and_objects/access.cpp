#include <iostream>

using namespace std;

class Box {
    public:
        double length;      // Length of a box
        double breadth;     // Breadth of a box
        double height;      // Height of a box
};

int main() {
    Box MarioBox;               // Declare MarioBox of type Box
    double volume = 0.0;        // Store the volume of a box here

    // box 1 specification
    MarioBox.height = 10.0;
    MarioBox.length = 11.0;
    MarioBox.breadth = 12.0;

    // volume of box 1
    volume = MarioBox.height * MarioBox.length * MarioBox.breadth;
    cout << "Volume of MarioBox : " << volume <<endl;

return 0;

}