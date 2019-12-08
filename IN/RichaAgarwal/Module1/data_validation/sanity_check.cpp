#include <iostream>
using namespace std;

int main(){
    int course_number;
    int age;
    cout << "Enter course number: ";
    cin >> course_number;
    if(course_number == 555) {
        cout << "You are a student in this class" << endl;
        cout << "Enter you age";
        cin >> age;
        while (age < 13 || age > 99)
        {
            cout << "Invalid age, re-enter";
            cin >> age;
        }
        cout << "You may enter this class" << endl;
    }
    return 0;
    }

   