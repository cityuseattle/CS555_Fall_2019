#include "rectangle.h"
using namespace std;

void Rectangle::setlength(float length)
{
    this->length = length;
}

void Rectangle::setwidth(float width)
{
    this->width = width;
}

float Rectangle::perimeter()
{
    return (length + width) * 2;
}

float Rectangle::area()
{
    return length * width;
}

void Rectangle::show()
{
    cout << "The length is: " << length << endl;
    cout << "The width is: " << width << endl;
}

int Rectangle::sameArea(Rectangle rect)
{
    // To compare floats for equality, we need to check whether their difference
    // is within some error bounds or epsilon value.
    // The abs function converts the result of the subtraction to an absolute value.
    float epsilon = 0.01;
    if (abs(area() - rect.area()) < epsilon)
    {
        return 1;
    }

    return 0;
}
