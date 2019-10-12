#include <iostream>
#include <string>
using namespace std;

int main(){
    string until;
    string isStaying;
    cout <<"Are you staying?:";
    cin >> isStaying;
    if (isStaying == "y"){
        cout << "Are you staying until 9:" << endl;
        cout << "Enter you until:";
        cin >> until;
        while(until != "y"){
            cout <<"Invalid answer, re-enter:";
            cin >> until;
        }
        cout << "Ok, you are a good student." << endl;
    }
    return 0;
}