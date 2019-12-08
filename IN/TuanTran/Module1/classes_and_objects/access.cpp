#include <iostream>

using namespace std;

//define class Box
class Box{
    public:
    double length;
    double breadth;
    double height;
};

int main() {
    Box TuanBox; // Create TuanBox object of type Box
    double volume =0.0; // Store the volume of box

    TuanBox.height=10.0;
    TuanBox.breadth=12.0;   // Assign values to this TuanBox object properties
    TuanBox.length=11.0;   

    volume = TuanBox.height * TuanBox.length * TuanBox.breadth;  // Calculate the volume
    cout << "Volume of TuanBox : " << volume << endl;  // Print out the result 

    return 0;
}