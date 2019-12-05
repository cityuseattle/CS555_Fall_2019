/*
This program reads an integer value and prints whether or not it is a leap year. 
In the Gregorian calendar (currently in use), a year is leap if it is divisible by 4 and not divisible by 100, 
or if it is divisible by 400.
*/
#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;

int main () {
 int year; // variable that will store the year entered by the user

 cout << "Enter a year: ";
 cin >> year; 

 // check to see if the imput is a number (a decimal number will be accepted, but rounded to floor)
 if (cin.fail() || std::isnan(year)) {			
     cout << "You did not input a number." << endl;
     return -1;
}

 // Check it the year is divisible by 4 and not divisible by 100, or if it is divisible by 400. If yes, it is a leap year. 
 if ( ((year%4)==0) && ((year%100)!=0) || ((year%400)==0) ) 
	 cout << "This is a leap year.";  
 else
     cout << "This is not a leap year.";

 return 0;
}