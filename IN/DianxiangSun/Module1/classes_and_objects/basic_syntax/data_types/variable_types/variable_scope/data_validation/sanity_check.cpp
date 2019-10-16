#include <iostream>
#include <string>
using namespace std;

int main(){
    int course_number;
    string isStaying;
    
    cout<<"enter course number: ";
    cin>>course_number;
   
    if(course_number ==555){
        cout<<"you are a student in this class"<<endl;
        cout<<"Staying until 9? [y/n]";
        cin>>isStaying;
        
        while(isStaying !="y"){
            cout <<"invaild answer, re-enter";
            cin>>isStaying;
        }
        cout<<"ok, you are a good student"<<endl;
    }
    return 0;
}