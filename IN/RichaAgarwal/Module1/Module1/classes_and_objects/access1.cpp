#include <iostream>

using namespace std;

class Box {
    public:
    double length;
    double breadth;
    double height;
};

int main() {
    Box Richa;
    double volume = 0.0;

    Richa.height = 10.0;
    Richa.length = 11.00;
    Richa.breadth = 12.0;

    volume = Richa.height * Richa.breadth * Richa.length;
    cout << "Volume of RichaBox : " << volume << endl;
    return 0;
}