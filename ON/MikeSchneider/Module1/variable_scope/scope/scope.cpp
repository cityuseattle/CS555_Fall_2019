// scope.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int x = 12;

int main()
{
	int a, b;
	int c;

	a = 10;
	b = 20;
	c = a + b;

	cout << ::x << endl;

	system("pause");
    return 0;
}

