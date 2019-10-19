#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box Box1;
    Box ZheweiBox;
    double volume=0.0;
    double volume2=0.0;

    Box1.height=5.0;
    Box1.length=6.0;
    Box1.breadth=7.0;

    ZheweiBox.height=10.0;
    ZheweiBox.length=11.0;
    ZheweiBox.breadth=12.0;

    volume=Box1.height*Box1.length*Box1.breadth;
    cout<<"Volume of Box1 : "<<volume <<endl;
    volume2=ZheweiBox.height*ZheweiBox.length*ZheweiBox.breadth;
    cout<<"Volume of ZheweiBox : "<<volume2 <<endl;
    return 0;
}