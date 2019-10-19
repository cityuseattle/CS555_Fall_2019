#include <iostream>
#include "Rectangle.h"
using namespace std;


Rectangle::Rectangle(float length, float width){   // Constructor
    setlength(length);
    setwidth(width);
} 
void Rectangle::setlength(float length){     // Setter function for length
    _length=length;
}
void Rectangle::setwidth(float width){   // Setter function for width
    _width=width;
}
float Rectangle::perimeter(){           // Function that calculate and return perimeter
    _perimeter=(_length + _width) * 2;
    return _perimeter;
} 
float Rectangle::area(){        // Function that calculate and return area
    _area=_length * _width;
    return _area;
}
void Rectangle::show(){          //Function that display length and width of the rectangle
    cout << "Length: " << _length << endl;
    cout << "Width: " << _width << endl;
}
int Rectangle::sameArea(Rectangle rec){    //Function that compare if another rec has same area as this one
    if(area() == rec.area()){
        return 1;}
    else{
        return 0;}
}


