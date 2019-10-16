#include <iostream>

using namespace std;

class Box{
    public:
    double length;
    double breadth;
    double height;
};

int main() {
    Box ZhijianBox;
    double volume = 0.0;

    ZhijianBox.height = 10.0;
    ZhijianBox.length = 11.0;
    ZhijianBox.breadth = 12.0;

    volume = ZhijianBox.height * ZhijianBox.length * ZhijianBox.breadth;
    cout << "Volume of ZhijianBox :" << volume << endl;
    
    return 0;
}