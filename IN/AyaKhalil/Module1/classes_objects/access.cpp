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
    Box AyaBox;
    double volume=0.0;
    double volume1=0.0;

Box1.height=5.0;
Box1.length=6.0;
Box1.breadth=7.0;

AyaBox.height=10.0;
AyaBox.length=11.0;
AyaBox.breadth=12.0;

volume=Box1.height * Box1.length * Box1.breadth;
cout <<"Volume of Box1 : " <<volume <<endl;

volume1=AyaBox.height * AyaBox.length * AyaBox.breadth;
cout <<"Volume of AyaBox : " <<volume1 <<endl;


return 0;

}
