#include <iostream>
using namespace std;

int main(){
    int a ;             // Judging variable
    double length;      // I use double to prevent the user from entering a decimal to cause an inability to operate.
    double width;
    double area;
    double radius;
    for(;;)             //Infinite loop. The exit is case 3.
    {
        cout << "please choice rectangle(1) or circle (2) or exit(3)"<< endl;
        cin >> a;
        switch (a)      //I use switch because it is rarely judged and it looks beautiful.
        {
        case 1:         //rectangle
            cout << "Please enter length: "<<endl;
            cin >> length; // I have a problem that cannot be solved which is when the user used is, if they entered string. How to solve it?
            cout << "Please enter width: "<<endl;
            cin >> width;
            area = length*width;
            cout << "The area is :"<< area <<endl;
            break;
        case 2:         //circle
            cout << "Please enter radius:"<< endl;
            cin >> radius;
            area = radius*radius*3.14;
            cout <<"The area is :"<< area <<endl;
            break;
        case 3:         // the  exit of loop
            cout << "Thank you for using!"<< endl;
            return 0;
        default:
            cout << "Wrong enter, please try again" << endl;
            break;
        }
    }
    
}

