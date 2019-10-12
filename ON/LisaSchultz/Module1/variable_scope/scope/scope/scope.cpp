// scope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

// Global variable declaration
int g;

int main()
{
    // Local variable declaration:
	int a, b;
	int c;

	// actual initialization
	a = 10;
	b = 20;
	g = a + b;

	cout << g << endl;

	return 0;
}

