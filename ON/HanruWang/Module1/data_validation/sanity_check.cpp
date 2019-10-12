#include <iostream>
#include <string>
using namespace std;

int g = 100;

int main() {

    int course_number;
    string isSaying;

    cout << "Enter course number: ";
    cin >> course_number;

    if (course_number == 555){
        cout << "You are a student in the class." << endl;
        cout << "Staying until 9? [y/n]";
        cin >> isSaying;
        
        while (isSaying != "y") {
            cout << "Invalid answer, re-enter: ";
            cin >> isSaying;
        }
    }

    cout << "Ok. You are a good student." << endl;
    return 0;

}