// All the definitions go here
class Time{  
    private:
    int _hours =24;       // Private attribute hours
    int _minutes =0;       // Private attribute minutes

    public:
    Time();  // Default constructor
    Time(int,int);          // Constructor 
    void settime(int, int);    //Definition of function settime
    void showtime();   //Definition of function settime
    Time sum(Time);    //Definition of function settime

};