#include <iostream>
#include <string>
using namespace std;
int main(){
    int course_number;
    string isStaying;
    cout << "Enter course number: ";
    cin >> course_number;
    if (course_number == 555) {
        cout << "staying until 9? [y/n] ";
        cin >> isStaying;
        while (isStaying != "y" && isStaying != "Y") {
            cout << "invalid answer renter ";
            cin >> isStaying;
        }
        cout <<"good student" << endl;
    }
    return 0;
}