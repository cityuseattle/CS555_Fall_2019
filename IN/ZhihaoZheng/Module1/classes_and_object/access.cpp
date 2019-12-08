#include <iostream>

using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box Box1;
    double volume = 0.0;
    cout << "Input Box1 heigh:";
    cin >> Box1.height;
    cout << "Input Box1 breadth:";
    cin >> Box1.breadth;
    cout << "Input Box1 length:";
    cin >> Box1.length;
    
    volume = Box1.breadth * Box1.height * Box1.length;
    cout << "Volume of Box1 : " << volume << endl;
     
    return 0;
}