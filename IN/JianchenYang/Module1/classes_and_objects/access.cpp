#include <iostream>
using namespace std;

class Box {
    public:
    double length;  //box length
    double breadth; //box breadth
    double height; //box height
};

int main() {
    Box JianchenBox;  //Declare JianchenBox of type Box
    double volume = 0.0;  // Store the volume of a box here

    // box 1 specification
    JianchenBox.height = 10.0;
    JianchenBox.length = 11.0;
    JianchenBox.breadth = 12.0;

    //volume of box 1
    volume = JianchenBox.height * JianchenBox.length * JianchenBox.breadth;
    cout << "Volume of JianchenBox :" << volume << endl;
    return 0;
}