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
    Time(int hr, int min){

        this->hours= hr;
        this->minutes= min;
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
        Time t(0,0);
        // adding the hours  of first and second time 
        t.minutes = minutes + T.minutes;
        // adding hours of first and second time minutes 
        t.hours=t.minutes/60;

        t.minutes= t.minutes%60;
        t.hours += hours + T.hours;
        return t;

    }

    // to display time object
    void showtime()
    {
        cout<< hours << " hours: " << endl;
        cout << minutes << "min: " << endl;
    }
    };

// main 
int main()
{
    Time T1(3,0);
    Time T2(12,3);
    Time T3 (5,2);
    // method call
	T1.settime(1,02);
	T2.settime(12,15);
	T3=T1.sum(T2);

    // print statement to display time 
	cout<<"\n Time 1 : ";T1.showtime();
	cout<<"\n Time 2 : ";T2.showtime();
	cout<<"\n Time 3 : ";T3.showtime();

	return 0;
}
