#include <iostream>
using namespace std;

class Rectangle //Define a rectangular class.
{
    //Private (default): Can only be accessed by its own function members or friends.
    private:
		float length;
		float width;
    //Public: Members can be accessed in any function or class.
	public:
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
		int sameArea(Rectangle);
};

//Setlength is a member of the class Rectangle, and the formal parameter is len.
void Rectangle::setlength(float len)
{
 length = len;
}

//Setwidth is a member of the class Rectangle, and the formal parameter is wid.
void Rectangle::setwidth(float wid)
{
 width = wid;
}

//Perimeter is a member of the class Rectangle.
float Rectangle::perimeter()
{
 return (2 * length + 2 * width); //The specific implementation of the member function.
}

//Area is a member of the class Rectangle.
float Rectangle::area()
{
 return length * width; //The specific implementation of the member function.
}

void Rectangle::show() //Show is a member of the class Rectangle.
{
 cout << "Length: " << length << " Width: " << width; //Calls and outputs the length and width of the first rectangle and the second rectangle.
}

int Rectangle::sameArea(Rectangle other) //Build an object and pass in parameters.
{
 float areaf = length * width; //The area of ​​the first rectangle is equal to its length and width
 float areas = other.length * other.width; //The area of ​​the second rectangle is equal to its length and width
 if (areaf == areas)
  return 1;
 return 0;
}

int main()
{
 Rectangle first; //Declare a rectangle class object
 Rectangle second; //Declare a rectangle class object
 //Call member function.
 first.setlength(5);
 first.setwidth(2.5);
 second.setlength(5);
 second.setwidth(18.9);
 cout << "First rectangle: ";
 first.show();
 cout << endl << "Area: " << first.area() << "Perimeter: " << first.perimeter() << endl << endl;
 cout << "Second rectangle: ";
 second.show();
 cout << endl << "Area: " << second.area() << "Perimeter: " << second.perimeter() << endl << endl;
 if (first.sameArea(second))
  cout << "Their area is the same.\n";
 else
  cout << "Their area is different.\n";
 
 //Call member function.
 first.setlength(15);
 first.setwidth(6.3);
 cout << "First rectangle: ";
 first.show();
 cout << endl << "Area: " << first.area() << "Perimeter: "<< first.perimeter() << endl << endl;
 cout << "Second rectangle: ";
 second.show();
 cout << endl << "Area: " << second.area() << "Perimeter: "<< second.perimeter() << endl << endl;
 if (first.sameArea(second))
  cout << "Their area is the same.\n";
 else
  cout << "Their area is different.\n";
 return 0;
}