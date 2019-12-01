#include<iostream>
using namespace std;

class Time
{
    // private variables 
    private:
    int hours;
    int minutes;

    // constructor
    public:
    Time(){

        this->hours;   
        this->minutes;
    }

    // to set the specified value in object
    void settime(int hr, int min)
    {
        this->hours= hr;
        this->minutes= min;
    }

    // sum of both times 
    Time sum (Time T)
    {
        Time t;
        int excesshr;
        // adding the hours  of first and second time 
        t.minutes = minutes + T.minutes;
        // adding hours of first and second time minutes 
        t.hours=t.minutes/60;

        t.minutes= t.minutes%60;
        t.hours += hours + T.hours;

        // printing the sum of the hours before converting it to 24 hr
        cout << "The sum of the hours is: " << t.hours << " hrs" << endl;
        cout << "The sum of the min is: " << t.minutes << " min" << endl;
        // validating the houurs
        if (t.hours > 24){
          excesshr = abs(t.hours - 24); 
          t.hours = t.hours - excesshr;
        }
        return t;

    }

    // to display time object
    void showtime()
    {
        cout<< hours << " hours: " << endl;
        cout << minutes << " min: " << endl;
    }
    };

// main 
int main()
{
    Time T1;
    Time T2;
    Time T3;
    // method call
	T1.settime(23,40);
	T2.settime(1,20);
	T3=T1.sum(T2);

    // print statement to display time 
	cout<<"\n Time 1 : ";T1.showtime();
	cout<<"\n Time 2 : ";T2.showtime();
	cout<<"\n Time 3 : ";T3.showtime();

	return 0;
}
