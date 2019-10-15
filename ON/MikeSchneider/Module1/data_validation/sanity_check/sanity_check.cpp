// sanity_check.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int course_number;
	string isStaying = y, n;
	

	cout << "Enter course number: " << endl;
	cin >> course_number;

	if (course_number == 555) {
		cout << "You are a student in this class" << endl;
		cout << "Staying until 9? [ y / n]" << endl;
		cin >> isStaying;

		while (isStaying == n ) {
			cout << "Invalid answer, re-enter: " << endl;
			cin >> isStaying;
		}
		cout << "Ok. You are a good student" << endl;
	}

	system("pause");
    return 0;
}

