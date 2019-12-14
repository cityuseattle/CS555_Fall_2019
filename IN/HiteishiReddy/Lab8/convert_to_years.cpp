#include <iostream>
using namespace std;

/**
 * This program calculates the number of days, months 
 * and years of a given integer by  the user. The month 
 * calculation uses 30 days for each month. 
 **/

int main(){

    // Local variable declaration:
    int num;
    int days;
    int years;
    int months;
    char ans;

    // do loop execution
    do{
        
    // takes user inputfor integer 
    cout << "Enter  the integer to convert: " << endl;
    cin >> num; 

    // calculate the number of years 
    years = num / 365;
    num = num % 365;
    
    // convert given integer to nymber of months 
    months  = num / 30;
    num = num % 30;

    // number of days 
    days = num;

    // print the output 
    cout << "The number of years are: " << years << endl;
    cout << " The number of months are: " << months << endl;
    cout << " The number of days are: " << days << endl;

    cout  << " \n Do you want to enter another number?  " << endl;
    cin >> ans;    

    }while (ans == 'Y' || ans == 'y');

    }
