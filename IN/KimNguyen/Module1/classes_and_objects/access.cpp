#include <iostream>

using namespace std;

class Box {
    public: 
    double length;
    double breath;
    double height;
};

int main () 
{
    Box KimBox;
    double volume = 0.0;

    //Box 1 specification
    KimBox.height = 10.0;
    KimBox.length = 11.0;
    KimBox.breath = 12.0;

    //Volume of Box 1
    volume = KimBox.height * KimBox.length * KimBox.breath;
    cout << "Volume of KimBox: " << volume << endl;

    return 0;
}