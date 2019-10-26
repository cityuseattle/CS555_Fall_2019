#include <iostream>
#include <string> 
using namespace std;
int main(){
    int course_number;
    string isStaying;
    cout <<"Enter course number: ";
    cin >> course_number;
    if(course_number == 555) {
        cout <<"Staying until 9? [y/n]" << endl;
        cin >> isStaying;
        while (isStaying != "y") {
            cout<< "Invalid answer, re-enter: ";
            cin >> isStaying;
        }
        cout << "Ok. You are a good student" << endl;
    }
    return 0;
}