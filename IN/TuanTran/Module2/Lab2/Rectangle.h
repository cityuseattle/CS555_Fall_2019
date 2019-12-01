#include <iostream> 


class Rectangle{
    private:
    float _length;  // private attribute length
    float _width; // private attribute width
    float _perimeter;
    float _area;

    public:
    Rectangle(float,float); // Constructor
    void setlength(float); //function to set length of Rectangle
    void setwidth(float);  //function to set width of Rectangle
    float perimeter();  //function to calculate perimeter of Rectangle
    float area(); //function to calculate area of Rectangle
    void show(); // function to display length and width of Rectangle
    int sameArea(Rectangle); // Check if another rectangle has same area 
};