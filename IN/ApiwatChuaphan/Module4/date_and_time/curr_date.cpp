#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // current time
    time_t now = time(0);

    // convert to string form
    char *dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;

    // convert to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt << endl;
}