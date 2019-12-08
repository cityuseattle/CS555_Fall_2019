// sanity_check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int course_number;
	string isStaying;
	cout << "Enter course number: ";
	cin >> course_number;

	if (course_number == 555) {
		cout << "You are a student in this class." << endl;
		cout << "Staying until 9? [y/n]";
		cin >> isStaying;
		while (isStaying != "y") {
			cout << "Invalid answer, re-enter: ";
			cin >> isStaying;
		}
		cout << "You may enter this class" << endl;
	}
}

