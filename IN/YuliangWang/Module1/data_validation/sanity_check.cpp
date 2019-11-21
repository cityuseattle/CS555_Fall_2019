#include <iostream>
#include <string>
using namespace std;

int main()
{
    int course_number;
    string isSaying;
    cout << " enter course number: ";
    cin >> course_number;
    if(course_number==555)
    {
        cout <<"You are a student in this class"<< endl;
        cout <<"Staying until 9? [y/n]: ";
        cin >> isSaying;

        if (isSaying !="y" && isSaying !="n")
        {
            cout <<" Invalid answer, re-enter: ";
            cin >> isSaying;
        }

        
        else
        {
            if(isSaying =="y")
            {
               cout << "You are a good student"<< endl; 
            }
            else
            {
                cout << "You need to work hard" << endl;
            }
        
        }
    }
    return 0;
}