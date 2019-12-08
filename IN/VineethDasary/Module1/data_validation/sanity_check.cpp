#include <iostream>
#include <string>

using namespace std;
int main() {
    int course_number;
    string isStaying;
    cout << "enter course number: ";
    cin >> course_number;
    if(course_number == 555) {
        cout << "you are a student in class" << endl;
        cout << "Staying until 9:00 pm? ";
        cin >> isStaying;
        while (isStaying != "y") {
            cout << "invaid age, re-enter: ";
            cin >> isStaying;
        }
        cout << "Ok, you are a good student" << endl;
    }
    return 0;
}