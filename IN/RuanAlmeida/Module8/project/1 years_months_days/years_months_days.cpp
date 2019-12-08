/*
This program reads an integer value (days) and display the total number of years, months and days in it.
It considers 1 year = 365 days and 1 month = 30 days. No leap year are assumed.
Example : If user input as 856 days the output should be 2 years 4 months 6 days.
*/
#include <iostream>
#include<math.h>
using namespace std;

static const int DAYS_IN_YEAR = 365; // Quantity of days in a year
static const int DAYS_IN_MONTH = 30; // Quantity of days in a month


int main () {
 int aNumber; // variable that will store the number (days) entered by the user
 int _years=0, _months=0, _days=0; // variables that will store the calculated amount of years, months and days based on aNumber. 

 cout << "Enter the number of days (integer): ";
 cin >> aNumber; 

 // check to see if the imput is a number (a decimal number will be accepted, but rounded to floor)
 if (cin.fail() || std::isnan(aNumber)) {			
     cout << "You did not input a number." << endl;
     return -1;
 }
 
 // Calculation of the variables:

 // this operation will extract and store the complete number of years according to the amount of days a year have (DAYS_IN_YEAR)
 _years = aNumber / DAYS_IN_YEAR; 

 // this operation will extract the complete number of years and then extract and store the complete number of months according 
 // to the amount of days a month have (DAYS_IN_MONTH)
 _months = (aNumber % DAYS_IN_YEAR) / DAYS_IN_MONTH;  
 
 // This operation will extract the complete number of years and months (as we did above) from aNumber and stores the amount of days left
 _days = (aNumber % DAYS_IN_YEAR) % DAYS_IN_MONTH; 

 cout << _years << " year(s) " << _months << " month(s) and " << _days << " day(s). "<< endl;

 return 0;
}