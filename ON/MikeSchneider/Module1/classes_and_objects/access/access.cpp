// access.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Box {
public:
	double length;
	double breadth;
	double height;
};

int main() {
	Box MikeBox;
	double volume = 0.0;

	MikeBox.height = 10.0;
	MikeBox.length = 11.0;
	MikeBox.breadth = 12.0;

	volume = MikeBox.height * MikeBox.length * MikeBox.breadth;
	cout << "Volume of MikeBox : " << volume << endl;

	system("pause");
	return 0;
	
}
