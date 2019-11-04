#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t now=time(0);

    char* dt=ctime(&now);
    cout <<"the local date and time is:  " << dt <<endl;

    tm *gmtm=gmtime(&now);
    dt=asctime(gmtm);
    cout<<"the utc date and time is :  "<<dt<<endl;
}