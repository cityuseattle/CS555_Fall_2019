#include <iostream>

using namespace std;

class Box {
    public:
        double length;
        double breadth;
        double height;
};

int main(){
    Box MinBox;
    double volume = 0.0;

    MinBox.height = 10.0;
    MinBox.length = 11.0;
    MinBox.breadth = 12.0;

    volume = MinBox.height * MinBox.length * MinBox.breadth;
    cout << "Volumn of MinBox : " << volume << endl;

    return 0 ;
}