/*
#include <iostream>
using namespace std;

int main() {
    int course_number;
    int age;
    cout << "Enter course number: ";
    cin >> course_number;
    if (course_number == 555) {
        cout << "You are a student in this class" << endl;
        cout << "Enter your age: ";
        cin >> age;
        while (age < 13 || age > 99) {
            cout << "Invalid age, re-enter: ";
            cin >> age; 
        }
        cout << "You may enter this class" << endl;
    }
    return 0; 
    
} 
*/
//===========================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    int course_number;
    string isStaying = "y";
    cout << "Enter course number: ";
    cin >> course_number;
    if (course_number == 555) {
        cout << "You are a student in this class" << endl;
        cout << "Staying until 9? [y/n]";
        cin >> isStaying;
        while (isStaying != "y" ) {
            cout << "Invalid answer, re-enter: ";
            cin >> isStaying; 
        }
        cout << "Ok. You are a good student!" << endl;
    }
    return 0; 
    
} 
