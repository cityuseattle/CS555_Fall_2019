
# include <iostream>
using namespace std;

class Box 
{
    public:
        double length;     //Length of a Box
        double breadth;    //Breadth of a Box
        double height;     //Height of a Box
};

int main()
{
    Box Box1;               //Declare Box1 of type Box
    Box PrashanthiBox;      
    PrashanthiBox.height=10.0;
    PrashanthiBox.length=11.0;
    PrashanthiBox.breadth=12.0;     
      
    double volume = 0.0;    //store volume of the box here

    //box1 specifications
    Box1.height=5.0;
    Box1.length=6.0;
    Box1.breadth=7.0;

    // volume of box1
    volume=Box1.height*Box1.length*Box1.breadth;
    cout << "Volume of Box1 : " << volume <<endl;

    //volume of my box
    volume=PrashanthiBox.height*PrashanthiBox.length*PrashanthiBox.breadth;
    cout << "Volume of PrashanthiBox: " << volume <<endl;

    return 0;
}