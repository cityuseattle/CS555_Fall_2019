#include<iostream>
using namespace std;

// The class
class Rectangle
{
//Declaration of variables  
private:
    float length; 
    float width;  

public:
    void setlength(float); // to set the length data member
    void setwidth(float); // to set the width data member
    float perimeter(); //to calculate and return the perimeter of the rectangle
    float area(); //to calculate and return the area of the rectangle
    void show(); //to display the length and width of the rectangle
    int sameArea(Rectangle); // that has one parameter of type Rectangle. 
};    
// function to setlength 
void Rectangle::setlength(float l)
{
    length = l;
}

// function to set width 
void Rectangle::setwidth(float w)
{
    width = w;
}

// function to calculate perimeter 
float Rectangle::perimeter()
{
    return (2 * length + 2 * width);
}

// function to calculate area
float Rectangle::area()
{
    return length * width;
    
}

// Function to display the length and width of rectangle
void Rectangle::show()
{
    cout << "\n Length: " << length << endl;
    cout << " Width: " << width << endl;
}

// Function to check if the area of the 2 rectangles are the same 
//  sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't.
int Rectangle::sameArea(Rectangle newDim)
{
	float area1 = length * width;
	float area2 = newDim.length * newDim.width;
	if (area1 == area2)
		return 1;
	return 0;
}

// main of the program 
int main()
{
	Rectangle first;
	Rectangle second;

    // call function with specified  length and width for each rectangle 
	first.setlength(5);
	first.setwidth(2.5);
	second.setlength(5);
	second.setwidth(18.9);
    cout << "The First rectangle: " << endl;

	// function call to display length and width Rectangle1
    first.show(); 
	cout << " Area = " << first.area() << endl;
    cout << " Perimeter = " << first.perimeter() << endl;
    cout << "\nThe second rectangle: ";

    // function call to display length and width Rectangle1
	second.show();
	cout << " Area = " << second.area() << endl;
    cout << " Perimeter = " << second.perimeter() << endl;

    // Conditional statement to comapre areas of the Rectangles
    if (first.sameArea(second))
		cout << " \n Rectangles have the same area \n "<< endl;
	else
		cout << "\n Rectangles don't have the same area \n " << endl;
	
    // 
    first.setlength(15);
	first.setwidth(6.3);
    cout << "Comparing the areas of the two rectangle" << endl;

	// function call and print statement for Rectangle1
    cout << "\nFirst rectangle: ";
	first.show(); 
    cout << " Area = " << first.area() << endl;
    cout << " Perimeter = " << first.perimeter() << endl;

    // function call and print statement for Rectangle2
    cout << "\nSecond rectangle: ";
    second.show();
	cout << " Area = " << second.area() << endl;
    cout << " Perimeter = " << second.perimeter() << endl;

    // Conditional statement to compare the two Rectangles area 
	if (first.sameArea(second))
		cout << " \n The areas od the rectangles are the same"<< endl;
	else
		cout << "\n The areas are not the same" << endl;
	return 0;
}
