#include <iostream>  
#include <string>  
using namespace std;  
       
int main(){
    int coures_number;
    string isStaying;

    cout << "Enter course number: ";
    cin >> coures_number;

    if(coures_number == 555){
        cout << "You are a student in this class" << endl;
        cout << "Staying until 9? [y/n]";
        cin >> isStaying;
        while (isStaying == "y")
        {
            cout << "Invalid answer, re-enter: ";
            cin >> isStaying;
        }
        cout << "Ok. You are a good student." << endl;
    }
    return 0;
}