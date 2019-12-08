#include <iostream>
#include <ctime>

using namespace std;

int main(){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << " the local date anf time is: " << dt << endl;

    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and ntime is: " << dt << endl;


}
