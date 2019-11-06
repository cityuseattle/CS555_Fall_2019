/*The C++ standard library does not provide a proper date type. C++ inherits the structs and functions for date and time manipulation from C. To access date and time related functions and structures, you would need to include <ctime> header file in your C++ program.
There are four time-related types: clock_t, time_t, size_t, and tm. The types - clock_t, size_t and time_t are capable of representing the system time and date as some sort of integer.
The structure type tm holds the date and time in the form of a C structure having the following elements −
struct tm {
   int tm_sec;   // seconds of minutes from 0 to 61
   int tm_min;   // minutes of hour from 0 to 59
   int tm_hour;  // hours of day from 0 to 24
   int tm_mday;  // day of month from 1 to 31
   int tm_mon;   // month of year from 0 to 11
   int tm_year;  // year since 1900
   int tm_wday;  // days since sunday
   int tm_yday;  // days since January 1st
   int tm_isdst; // hours of daylight savings time
}
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //current date/time based on current system
    time_t now = time(0);


    //convert now to string form:
    char* dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;

    //convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt << endl;
    
}