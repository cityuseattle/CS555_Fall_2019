#include <iostream>
using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
};
int main()
{
    Box Box1;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volum of Box1 : " << volume << endl;

    Box myBox;
    double volume2 = 0.0;

    myBox.height = 10.0;
    myBox.length = 11.0;
    myBox.breadth = 12.0;

    volume2 = myBox.height * myBox.length * myBox.breadth;
    cout << "Volum of myBox : " << volume2 << endl;

    return 0;
}