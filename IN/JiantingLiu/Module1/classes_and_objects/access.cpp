#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box box1;
    double volume = 0.0;

    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;

    volume = box1.height*box1.length*box1.breadth;

    cout <<" Volume of box1 : " << volume << endl;


Box box_Jianting;
    double volumeofJiantingBox = 0.0;

    box_Jianting.height = 10.0;
    box_Jianting.length = 11.0;
    box_Jianting.breadth = 12.0;

    volumeofJiantingBox = box_Jianting.height*box_Jianting.length*box_Jianting.breadth;

    cout <<" Volume of box_Jianting : " << volumeofJiantingBox << endl;

    return 0;
}