#include <iostream>

using namespace std;

class Box{
    public:
    double length;      //Length of a box
    double breadth;     //Breadth of a box
    double height;      //Height of a box
};

int main () {
    Box Box1;
    Box Richa;
    double volume = 0.0;

    // box 1 specification
       Box1.height = 5.0;
       Box1.length = 6.0;
       Box1.breadth = 7.0;

       Richa.height = 10.0;
       Richa.breadth = 11.0;
       Richa.length = 12.0;

       volume = Box1.height * Box1.length * Box1.breadth;
       cout<< "Volume of Box1 :" << volume << endl;

       volume = Richa.height * Richa.length * Richa.breadth;
       cout << "Volume of RichaBox : " << volume << endl;
       

       return 0;

}