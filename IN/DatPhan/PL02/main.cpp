#include <iostream>
#include "rectangle.h"
#include <string>
using namespace std;
#define NEWLINE '\n'

int main()
{
    Rectangle rectA;
    Rectangle rectB;

    // Set length and width for rectA and rectB
    rectA.setlength(5);
    rectA.setwidth(2.5);
    rectB.setlength(5);
    rectB.setwidth(18.9);

    // Show the dimensions, area, and perimeter for rectA
    cout << "RectA" << endl;
    rectA.show();
    cout << "Perimeter: " << rectA.perimeter() << " - Area: " << rectA.area() << endl;
    cout << NEWLINE;

    // Show the dimensions, area, and perimeter for rectA
    cout << "RectB" << endl;
    rectB.show();
    cout << "Perimeter: " << rectB.perimeter() << " - Area: " << rectB.area() << endl;
    cout << NEWLINE;

    // Compare the area between rectA and rectB
    string result = (rectA.sameArea(rectB) == 1) ? "Same area" : "Different area";
    cout << "Compare the area between rectA and rectB: " << result << endl;

    // Update the length and width of rectA
    rectA.setlength(15);
    rectA.setwidth(6.3);

    // Show the dimensions, area, and perimeter for rectA
    cout << "RectA" << endl;
    rectA.show();
    cout << "Perimeter: " << rectA.perimeter() << " - Area: " << rectA.area() << endl;
    cout << NEWLINE;

    // Show the dimensions, area, and perimeter for rectA
    cout << "RectB" << endl;
    rectB.show();
    cout << "Perimeter: " << rectB.perimeter() << " - Area: " << rectB.area() << endl;
    cout << NEWLINE;

    // Compare the area between rectA and rectB
    result = (rectA.sameArea(rectB) == 1) ? "Same area" : "Different area";
    cout << "Compare the area between rectA and rectB: " << result << endl;

    return 0;
}