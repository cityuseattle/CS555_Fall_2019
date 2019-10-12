// access.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Box {
public:
	double length;   // length of box
	double breadth;  // breadth of box
	double height;   // height of box
};

int main()
{
	Box Box1;		// Declare Box1 of type Box
	Box LisaBox;	// Declare LisaBox of type Box
	double volume = 0.0;   // Store volume of the box

	// Box1 specifications
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// LisaBox specifications
	LisaBox.height = 10.0;
	LisaBox.breadth = 12.0;
	LisaBox.length = 11.0;

	// volume of Box1
	volume = Box1.height * Box1.breadth * Box1.length;
	cout << "Volume of Box1 is " << volume << endl;

	// volume of LisaBox
	volume = LisaBox.height * LisaBox.breadth * LisaBox.length;
	cout << "Volume of LisaBox is " << volume << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
