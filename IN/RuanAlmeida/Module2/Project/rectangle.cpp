#include <iostream>
using namespace std;

class Rectangle {
  private:
    float Length, Width;

  public: 
    Rectangle () {
      Length = 0;
      Width = 0;  
    }  // constructor
    
    void setLength(float aLength) {  
      Length = aLength;
    } // to set the length data member         
    
    void setWidth(float aWidth) {  
      Width = aWidth;  
    } // to set the width data member
    
    float area () {
      return Length * Width;
    } // to calculate and return the area of the rectangle

    float perimeter() {
      return (Length * 2) + (Width * 2);
    }  // to calculate and return the perimeter of the rectangle
 
    void show() {
      cout << "Length: " << Length << endl;
      cout << "Width: " << Width << endl;  
    }  // to display the length and width of the rectangle

    void showCalculations() {
      cout << "Area: " << area() << endl;
      cout << "Perimeter: " << perimeter() << endl;
    }  // to display the area and perimeter of the rectangle

    int sameArea(Rectangle aRectangle) {
      float area1, area2;
      area1 = area();
      area2 = aRectangle.area();

      if (area1 == area2) {
        return 1;  
      } 
      else {
        return 0;  
      }
    }  // returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
};

int main () {
  Rectangle rectA, rectB;

  rectA.setLength(5);
  rectA.setWidth(2.5);
  cout << "\v" << "Rectangle A data ==========" << endl;
  rectA.show();
  rectA.showCalculations();
//  cout << "Area: " << rectA.area() << endl;
//  cout << "Perimeter: " << rectA.perimeter() << endl;

  rectB.setLength(5);
  rectB.setWidth(18.9);
  cout << "\v" << "Rectangle B data ==========" << endl;
  rectB.show();
  rectB.showCalculations();

  // Compare rectangles areas 
  if (rectA.sameArea(rectB) == 1)
    cout << "\v => Rectangles A and B have the same area." << endl;
  else
    cout << "\v => Rectangles A and B have diferent areas." << endl;

  // Update rectangle A   
  rectA.setLength(15);
  rectA.setWidth(6.3);
  cout << "\v" << "Rectangle A data UPDATED! ==========" << endl;
  rectA.show();
  rectA.showCalculations();
  
  // Compare rectangles areas 
  if (rectA.sameArea(rectB) == 1)
    cout << "\v => Rectangles A and B have the same area." << endl;
  else
    cout << "\v => Rectangles A and B have diferent areas." << endl;

  return 0;
}