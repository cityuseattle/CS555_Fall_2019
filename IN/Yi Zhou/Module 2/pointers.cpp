#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointter;

    mypointter = &firstvalue;
    *mypointter = 10;
    *mypointter = 30;
    mypointter = &secondvalue; //ref

    *mypointter = 20;
    *mypointter = 25;
    cout << "first value is " << firstvalue << '\n';
    cout << "second value is " << secondvalue << '\n';
    cout << *mypointter << endl;
    return 0;
}