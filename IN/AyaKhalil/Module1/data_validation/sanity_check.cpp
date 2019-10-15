#include <iostream>
#include<string>
using namespace std;
int main() {
    int course_number;
    string isStaying;
    cout << "enter course number:";
    cin >> course_number;
    if(course_number == 555){
        cout <<"you r a student in this class"<< endl;
        cout <<"are you staying untile 9 [y/n]: ";
        cin >> isStaying;
        while(isStaying=="n"){
            cout <<"invalid age, re enter: ";
            cin >> isStaying;
        }
        cout << "ok. you r a good student" << endl;

    }
    return 0;
}