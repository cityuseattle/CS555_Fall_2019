#include <iostream>
#include <string>
using namespace std;

int main(){
    int course_number;
    int age;
    cout << "Enter course number:"<< endl;
    cin >> course_number;

    while (course_number != 555){
        cout << "Invalid number, Enter course number:"<<endl;
        cin >> course_number;
    }

    if (course_number == 555){
        cout << "You are a student in this class";
        cout << "Enter you age:"<<endl;
        cin >> age;
        while (age < 13 || age > 99)
            {
            cout << "Invalid age , re-enter:"<< endl;
            cin >> age;
            }
         cout << "You may enter this class"<< endl;
         
        string isStaying;
        string isStaying2 = "y";
        cout << "Will you staying until 9?[y/n]"<<endl;
        cin >> isStaying;
            while(isStaying != isStaying2)
            {
                cout << "Will you staying untinl 9?"<<endl;
                cin >> isStaying;
            }
        cout << "OK. You are agood student!"<<endl;
    
    }
   
}