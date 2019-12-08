#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // current date/time based on the current system
    time_t now = time(0);

    // convert noew to string form
    char *dt = ctime(&now);

    cout << "The local date and time is: " << dt << endl;

    // convert noew to tm strut for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt << endl;
}