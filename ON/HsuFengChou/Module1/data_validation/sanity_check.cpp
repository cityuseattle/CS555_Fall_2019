#include <iostream>
#include <string>

using namespace std;
int main(){
    int course_number;
    string isStaying;
    
    cout << "Enter Course Number: ";
    cin >> course_number;
    if (course_number == 555){
        cout << "You are a student in this class" << endl;
        cout << "Staying Until 9? [y/n] ";
        cin >> isStaying;
        while(true){
            
            if (isStaying == "n"){
            cout << "Invalid answer, please re-enter: " ;
            cin >> isStaying;
            }
            else if(isStaying == "y"){
                cout << "OK. You are a good student." << endl;
                break;
            }
        }  
       
    }
    
    return 0;
}