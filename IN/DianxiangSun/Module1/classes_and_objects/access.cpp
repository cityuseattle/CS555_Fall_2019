#include <iostream>

using namespace std;

class Box {
    public:
       double length; // Length of a box
       double breadth; // Breadth of a box
       double heigth; //Height of a box
};

int main() {
    Box DianxiangSunBox; // Declare Box1 of type Box
    double volume = 0.0; // Store the volume of a box here

    // DianxiangSunBox specification
    DianxiangSunBox.heigth = 10.0;
    DianxiangSunBox.length = 11.0;
    DianxiangSunBox.breadth = 12.0; 

    // Volume of DianxiangSunBox
    volume = DianxiangSunBox.heigth * DianxiangSunBox.length * DianxiangSunBox.breadth;
    cout << "Volume of DianxiangSunBox : " << volume << endl;

    return 0;
}
