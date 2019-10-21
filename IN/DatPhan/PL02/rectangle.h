#include <iostream>

class Rectangle
{

// Delcare member variables.
// Their default value, which is 0, is implicitly set by c++
private:
    float length;
    float width;

public:
    void setlength(float length);
    void setwidth(float width);
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle rect);
};
