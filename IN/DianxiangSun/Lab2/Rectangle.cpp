#include <iostream>
using namespace std;

// Write the definition for a class called Rectangle that has floating point data members length and width. 
// The class has the following member functions:
class Rectangle {
public:
//Declaring function to set the length data member
    void setlength(float);

//Declaring function to set the width data member
    void setwidth(float);

//Declaring function to calculate and return the perimeter of the rectangle
    float perimeter();

//Declaring function to calculate and return the area of the rectangle
    float area();

//Declaring function to display the length and width of the rectangle
    void show();

//int sameArea(Rectangle) that has one parameter of type Rectangle. 
//sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
    int sameArea(Rectangle);

private:
    //Declaring variables
    float length, width;
};

//Write the definitions for each of the above member functions.
void Rectangle::setlength(float l) {
    length = l; //Set length
}

void Rectangle::setwidth(float w) {
    width = w; //Set width
}

float Rectangle::perimeter() {
    return 2 * (length + width); //Calculate perimeter = 2 * (length + width)
}

float Rectangle::area() {
    return length * width; //Calculate area = length * width
}

//Dispaly the length, width
void Rectangle::show() {
    cout << "Length: " << length << ", Width: " << width << endl;
}

//Check if areas are the same
int Rectangle::sameArea(Rectangle rec) {
    if (area() == rec.area()) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    //Write main function to create two rectangle objects. 
    Rectangle rec1, rec2;
    //Set the length and width of the rec1 rectangle to 5 and 2.5.
    rec1.setlength(5);
    rec1.setwidth(2.5);
    //Set the length and width of the rec2 rectangle to 5 and 18.9.
    rec2.setlength(5);
    rec2.setwidth(18.9);
    //Display each rectangle and its area and perimeter.
    rec1.show();
    cout << "Area: " << rec1.area() << ", Perimeter: " << rec1.perimeter() << endl << endl;
    rec2.show();
    cout << "Area: " << rec2.area() << ", Perimeter: " << rec2.perimeter() << endl << endl;
    //Check whether the two Rectangles have the same area and print "rec1 and rec2 have the same area." if same, print "The area of rec1 and rec2 not the same." if not same.
    if (rec1.sameArea(rec2)) {
        cout << "rec1 and rec2 have the same area." << endl;
    } else {
        cout << "The area of rec1 and rec2 not the same." << endl;
    }
    //Set the length and width of the rec1 rectangle to 15 and 6.3. 
    rec1.setlength(15);
    rec1.setwidth(6.3);
    //Display each Rectangle and its area and perimeter again.
    cout << endl;
    rec1.show();
    cout << "Area: " << rec1.area() << ", Perimeter: " << rec1.perimeter() << endl << endl;
    rec2.show();
    cout << "Area: " << rec2.area() << ", Perimeter: " << rec2.perimeter() << endl << endl;
    //Check whether the two Rectangles have the same area and print "rec1 and rec2 have the same area." if same, print "The area of rec1 and rec2 not the same." if not same.
    if (rec1.sameArea(rec2)) {
        cout << "rec1 and rec2 have the same area." << endl;
    } else {
        cout << "The area of rec1 and rec2 not the same." << endl;
    }
    return 0;
}
