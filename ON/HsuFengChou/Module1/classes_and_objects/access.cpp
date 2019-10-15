#include <iostream>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box HsuBox;
    double volume = 0.0;

    //box1
    HsuBox.height = 10.0;
    HsuBox.length = 11.0;
    HsuBox.breadth = 12.0;

    //volume of HsuBox
    volume = HsuBox.height * HsuBox.length * HsuBox.breadth;
    cout << "Volume of HsuBox = " << volume << endl;

    return 0;
}