#include<iostream>
using namespace std;

class BOX
{
    public:
    double length;
    double breadth;
    double height;
};

int main()
{
    BOX PoojaBox;
    double volume = 0.0;

    PoojaBox.height = 10.0;
    PoojaBox.length = 11.0;
    PoojaBox.breadth = 12.0;

    volume = PoojaBox.height * PoojaBox.length * PoojaBox.breadth;
    cout << " Volume of the PoojaBox : " << volume << endl;
    return 0;
}