#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main() {
    Box ShangBox;
    double volume = 0.0;

    ShangBox.height = 10.0;
    ShangBox.length = 11.0;
    ShangBox.breadth = 12.0;

    volume = ShangBox.height * ShangBox.length * ShangBox.breadth;
    cout << "Volume of ShangBox : " << volume <<endl;

    return 0;
    }