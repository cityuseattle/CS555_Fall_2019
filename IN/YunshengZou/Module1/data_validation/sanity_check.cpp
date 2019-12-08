#include <iostream>
#include <string> //add the standard libarary to support string class
using namespace std;

int main(){
    int course_number;
    //int age;
    string isStaying;//change the int age to string isStaying
    cout<<"Enter course number:"<<endl;
    cin>>course_number;
    if(course_number == 555){
        cout<<"You are a student in this class"<<endl;
        //cout<<"Enter your age:"<<endl;
        cout<<"Staying until 9? [y/n]"<<endl;
        //cin>>age;
        cin>>isStaying;
        while(isStaying != "y"){//change the condition of the while loop
            //cout<<"Invalid age, re-enter:"<<endl;
            cout<<"Invalid answer, re-enter:"<<endl;//change the notice 
            //cin>>age;
            cin>>isStaying;//change input to isStaying
        }
        //cout<<"You may enter this class"<<endl;
        cout<<"Ok. You are a good student."<<endl;//change the conclusion notice
    }
    return 0;
}