#include <iostream>

using namespace std;

class Box{
    public:
    double length; //length of a box
    double breadth; //breadth of a box
    double height; //height of a box
};

int main(){
    Box Box1; //declare Box1 of type Box
    Box HuixianBox; //Huixian's Box
    double volume = 0.0; //store the volume of a box here
    double Huixianvolume = 0.0;//store the volume of Huixian here

    //box1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    //HuixianBox specification
    HuixianBox.length=11.0;
    HuixianBox.height=10.0;
    HuixianBox.breadth=12.0;

    //volume of box 1
    volume =Box1.height*Box1.length*Box1.breadth;
    cout << "volume of box1: " <<volume <<endl;

    //volume of HuixianBox
    Huixianvolume =HuixianBox.breadth*HuixianBox.height*HuixianBox.length;
    cout<<"volume of Huixian is: "<<Huixianvolume<<endl; 

    return 0;
}