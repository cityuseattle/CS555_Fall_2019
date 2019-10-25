#include <iostream>
#include <string> 
using namespace std;

int main() {
    int course_number;
    string isStaying;

    cout << "Enter course number: ";
    cin >> course_number;

    if (course_number == 555) {
        cout << "You are a student in this class" << endl;
        cout << "Staying until 9? [y/n]: ";
        cin >> isStaying;
        while ((isStaying != "y") && (isStaying != "Y")) {
            cout << "Wrong answer, think better: ";
            cin >> isStaying;
        }
        cout << "Ok. You are a good student." << endl;
    }
    else {
       cout << "Course not found!";
    }
    
    return 0;
}