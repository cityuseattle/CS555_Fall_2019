#include <iostream>
using namespace std;

class time{
    private:
        int hour;
        int minute;
    
    public:
        void settime(int newHour, int newMinute){
            hour = newHour;
            minute = newMinute;
        }

        void showtime(){
            cout << hour << "h and " << minute << "m." << endl;
        }

        time sum(time newTime){
            time thirdTime;
            thirdTime.hour = hour + newTime.hour;
            thirdTime.minute = minute + newTime.minute;
            if(thirdTime.minute >= 60){
                thirdTime.hour++;
                thirdTime.minute -= 60;
            }
            return thirdTime;
        }
};

int main(){
    time firstTime;
    time secondTime;
    firstTime.settime(1,10);
    secondTime.settime(2,58);
    time thirdTime = firstTime.sum(secondTime);
    cout << "The first time is ";
    firstTime.showtime();
    cout << "The second time is ";
    secondTime.showtime();
    cout << "The third time is ";
    thirdTime.showtime();
    return 0;
}