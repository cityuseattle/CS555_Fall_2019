#include <iostream>
#include "time.h"
using namespace std;
int main(){

    Time T1(48,50);    // Create T1 Time object 
    Time T2(23,30);     // Create T2 Time object

    cout<< "Time 1 " << endl;     // Print out the time of T1
    T1.showtime();

    cout<< "Time 2 " << endl;    // Print out the time of T2
    T2.showtime();

    cout << "Time 1 + Time 2" << endl;   // Print out the time of sum T1 T2
    T1.sum(T2).showtime();
    }