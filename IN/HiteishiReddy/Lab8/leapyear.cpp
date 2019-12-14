#include <iostream>
using namespace std;

/*
This program checks to see if year entered by
the user is a leap year or not
*/

int main(){

// Local variable declaration:
int year;
char input = 'y';

// do loop execution
do{
cout << "Enter the year: " << endl;
cin >> year;

// checks to see if the year is divisible by 4, 400 and 100
// to determine if the year is a leap year 
 if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0){
    
//If the year is divisible it is a leap year  
 cout << "The year is a leap year " << endl;
 }

// if not it prints that it is not a leap year 
 else 
 cout << "The year you entered is not a leap year " << endl;

// gives user option to enter another year   
 cout  << " \n Do you want to enter another year ?" << endl;
 cin >> input;

// while loop to execute the block of code as long as the input is y
}while (input == 'Y' || input == 'y');

}