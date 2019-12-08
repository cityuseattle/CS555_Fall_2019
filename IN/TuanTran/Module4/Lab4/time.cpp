#include <iostream>
#include "time.h"

using namespace std;

Time::Time(){   // Constructor to set time 
}
Time::Time(int hours, int minutes){   // Constructor to set time 
    this->settime(hours,minutes);
    }

void Time::settime(int h, int m){     //Set time function 
    
    if(0<h && h <=24 && 0 <= m && m <= 60){    // If user input valid hour and minute
        this->_hours=h;
        this->_minutes=m;
    }
    
    else{                           // If user input invalid than first I want to assign the values first
        _hours=h;
        _minutes=m;

    while (_hours>24 || _minutes > 60){  // If user input hour larger than 24 and minutes larger than 60, we want to recalculate
    if (_minutes>=60){                      // If minute larger than 60 than add 1 to hour value
        _hours = h+1;
        _minutes = m-60;    
    }
    if (_hours>24){                         // If hour larger than 24 then restart from 1
        _hours=_hours-24;
    }}}}
    

void Time::showtime(){                   // Function to print out the hour and minutes
    cout <<   "The time is " << _hours  << ":" << _minutes << endl;
    } 
    
Time Time::sum(Time t2){            // Function to sum 2 time objects
    Time t3;                        // Create an t3 object
	t3._minutes = this->_minutes + t2._minutes;        // Add the minute
	t3._hours=t3._minutes/60;       // Turn minutes to hours
	t3._minutes=t3._minutes%60;        // Calculate the minute left

	t3._hours += _hours + t2._hours;  // Add the hours together
    if (t3._hours>24){  // If hour > 24 then start from 1
        t3._hours-=24;

    }

	return t3;
};


