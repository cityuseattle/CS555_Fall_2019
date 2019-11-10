#include <iostream>
 using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

// Derived class
class Square: public Shape {
   public:
      int getArea() { 
         return (width * width); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   Square square;
   square.setWidth(10);

   // Print the area of the square
   cout << "Total area of the square: " << square.getArea() << endl;

   return 0;
}