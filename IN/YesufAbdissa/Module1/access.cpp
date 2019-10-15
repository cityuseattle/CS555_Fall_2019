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
    Box yesufBox;
    double volumeBox1 = 0.0;
    double volumeYesuf = 0.0;

     // box1 specification
     Box1.height = 5.0;
     Box1.length = 6.0;
     Box1.breadth = 7.0;

     // Yesuf box specification
     yesufBox.height = 10.0;
     yesufBox.length = 11.0;
     yesufBox.breadth = 12.0;

     // volume of box 1
     volumeBox1 = Box1.height * Box1.length * Box1.breadth;
     cout << "Volume of Box1 : " << volumeBox1 << endl;

        // My box volume
      volumeYesuf = yesufBox.height * yesufBox.length * yesufBox.breadth;
      cout << " Yesuf Box Volume is: " << volumeYesuf << endl;


     return 0;

}