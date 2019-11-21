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
    Box RuanBox;
    double volume = 0.0;

    // Box1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // RuanBox  specification
    RuanBox.height = 10.0;
    RuanBox.length = 11.0;
    RuanBox.breadth = 12.0;

    // volume of Box1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout <<"Volume of Box1: " << volume <<endl;
    
    // volume of RuanBox
    volume = RuanBox.height * RuanBox.length * RuanBox.breadth;
    cout <<"Volume of RuanBox: " << volume <<endl;

    return 0;
}