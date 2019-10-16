#include <iostream>
using namespace std;

class BOX{
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    BOX AmruthaBox;
    double volume = 0.0;

    AmruthaBox.height = 10.0;
    AmruthaBox.length = 11.0;
    AmruthaBox.breadth = 12.0;

    volume = AmruthaBox.height * AmruthaBox.length * AmruthaBox.breadth;
    cout << " Volume of the AmruthaBox : " << volume << endl;
    return 0;
}