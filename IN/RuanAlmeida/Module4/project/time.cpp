#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <cstdlib>
using namespace std;

class time {
    static const int MAX_HOUR = 23;
    static const int MAX_MINUTE = 60;
    private:
        int Hour, Minute;

    public:

         time() {   // constructor          
            // initialize the variables
             Hour = 0;
             Minute = 0;
         } 
         void settime(int aHour, int aMinute) {   // to set the specified value in object
             // Hour has to be between 0 and 23
             if (aHour > MAX_HOUR) {
                 aHour = MAX_HOUR;
             }; 
             if (aHour < 0) {
                 aHour = 0;
             }; 
             // Minute has to be between 0 and 60               
             if (aMinute > MAX_MINUTE) {
                 aMinute = MAX_MINUTE;
             }; 
             if (aMinute < 0) {
                 aMinute = 0;
             }; 

             Hour = aHour;
             Minute = aMinute;    
         }
         void showtime() {   // to display time object
             string sHour, sMinute;

             // Garantee a 2 digit time (hh:mm) for better display
             if (Hour < 10) {
                 sHour = "0" + to_string(Hour);  
             } 
             else {
                 sHour = to_string(Hour);
             };
             if (Minute < 10) {
                 sMinute = "0" + to_string(Minute);  
             } 
             else {
                 sMinute = to_string(Minute);
             };

             cout << sHour << ":" << sMinute << endl;    
         }
        
         time sum(time TimeA, time TimeB) {  // to sum two time object & return time
            time SumTime;
            int SumHour, SumMinute, extraHour;

            extraHour = 0;
            SumMinute = TimeA.Minute + TimeB.Minute;
            
            // More than 60 minutes will increase the hour
            if (SumMinute > MAX_MINUTE) {
                
                SumMinute = SumMinute - MAX_MINUTE;
                extraHour = 1;
            };

            SumHour = TimeA.Hour + TimeB.Hour + extraHour;
            if (SumHour > MAX_HOUR) {
                SumHour = MAX_HOUR;
            };

            SumTime.Minute = SumMinute; 
            SumTime.Hour = SumHour;           
             
            return SumTime;     
         }        
};

int main() {
    time  TimeA, TimeB, TimeAB;
    
    TimeA.settime(12, 30);
    TimeA.showtime();    
    
    TimeB.settime(7, 59);
    TimeB.showtime();

    TimeAB = TimeAB.sum(TimeA, TimeB);
    TimeAB.showtime();  

    return 0;
}
