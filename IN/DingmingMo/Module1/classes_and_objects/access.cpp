#include <iostream>
using namespace std;
class Box
{
    public:
    double length;
    double breadth;
    double height;
};

int main() {
    Box Box1;
    double volume = 0.0;

    Box1.height = 10.0;
    Box1.length = 11.0;
    Box1.breadth = 12.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume <<endl;

    return 0;
}



