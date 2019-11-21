#include <iostream>
#include <string>
using namespace std;
bool check_y(){
    char isStaying;
    cout << "Invalid answer, re-enter: ";
    cin >> isStaying;
    if (isStaying == 'y')
    {
        return true;
    }else
    {
        return false;
    }
    
    
}

int main() {
    int course_number;
    char isStaying;
    cout << "Enter course number: ";
    cin >> course_number;
    if (course_number == 555) {
        cout << "You are a student in this class" <<endl;
        cout << "Staying until 9? [y/n]: ";
        cin >> isStaying;
        bool check = false;
        while (!check) {
            check = check_y();
        }
       cout << "Ok. You are a good student." << endl;
    }  
    return 0;
}