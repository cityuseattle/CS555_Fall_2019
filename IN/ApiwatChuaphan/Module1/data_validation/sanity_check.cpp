#include <iostream>
#include <string>
using namespace std;

int main()
{
    int course_number;
    // int age;
    string isStaying;
    cout << "Enter course number: ";
    cin >> course_number;
    if (course_number == 555)
    {
        cout << "You are a student in this class" << endl;
        cout << "Staying until 9? [y/n]:  ";
        cin >> isStaying;
        while (isStaying.compare("y") != 0)
        {
            cout << "Invalid answer, re-enter: ";
            cin >> isStaying;
        }
        cout << "You are a good student" << endl;
    }
    return 0;
}