#include <iostream>
using namespace std;

class Box{
    public:
        double length;  //length of box
        double breadth;  //breadth of box
        double height;  //height of box
};

int main(){
    Box Box1; //Declare Box1 of type Box
    Box JankiBox; //another box of type Box
    double volume = 0.0;  // volume of a box

    //box1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    //JankiBox specification
    JankiBox.height = 10.0;
    JankiBox.length = 11.0;
    JankiBox.breadth = 12.0;

    //volume of box1
    volume = Box1.breadth * Box1.height * Box1.length;
    cout << "Volume of Box1 : " << volume <<endl;

     //volume of JankiBox
    volume = JankiBox.breadth * JankiBox.height * JankiBox.length;
    cout << "Volume of JankiBox : " << volume <<endl;
    return 0;
}