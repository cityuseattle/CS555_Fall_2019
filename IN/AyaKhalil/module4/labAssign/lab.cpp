#include <iostream>
#include <ctime>
using namespace std;

class Time{
    private:
        int hour;
        int min;
 //public constructor
    public:
     Time(int hour, int min){
          this->hour= hour;
          this->min=min;
    }
//set time with new values    
    void settime(int hour, int min){
        this->hour=hour;
        this->min=min;
    }
//print the hours and mins    
    void showtime(){
        cout<< "The time is:   "<< hour <<":"<<min<<endl;
    }
// time function to add two times    
    Time sumtime(Time f){    
        Time sum(0,0);    //create new object of time
        //add mins
        sum.min=f.min+this->min;
        //add hours      
        sum.hour=f.hour+this->hour+(sum.min/60);
        sum.min=(sum.min)%60;
	    cout<<sum.hour<<" hour(s) "<<sum.min<<" minute(s) "<<endl;
        return sum;
    }
};

int main(){
    //create new objects of time and set the default values
    Time t(9,55);
    Time t2(9,55);
    Time t3(0,0);
    //set the time for each object
    t.settime(10,00);
    t2.settime(10,30);
    //print the time
    t.showtime();
    t2.showtime();
    //add two times
    t3 = t.sumtime(t2);
    return 0;
}