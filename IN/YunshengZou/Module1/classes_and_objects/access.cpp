#include <iostream>

using namespace std;

class Box {
    public:
       double length; //length of a box
       double breadth;//breadth of a box
       double height;// height of a box
};

int main(){
    Box box1; //declare the box1 object which is Box type
    Box YunshengBox;//declare my own box
    double volume =0.0; //the volume of the Box object

    //box1 specification
    box1.breadth = 5.0;
    box1.length = 7.0;
    box1.height = 6.0f;

    //YunshengBox specification
    YunshengBox.breadth = 12.0;
    YunshengBox.length = 11.0;
    YunshengBox.height = 10.0;

    //output the volume of the box1
    volume = box1.breadth*box1.length*box1.height;
    cout<<"The volume of the box1 is:" << volume << endl;

    volume = YunshengBox.breadth*YunshengBox.length*YunshengBox.height;
    cout<<"The volume of the YunshengBox is:"<<volume<<endl;

    return 0;
}