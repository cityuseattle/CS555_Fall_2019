#include <iostream>
#include <string>
using namespace std;

int main()
{   
    double area;
    string isSaying;
    cout <<"enter a shape: ";
    cin >> isSaying;
    
    while(isSaying !="cricle" && isSaying !="rectangle")
    {
        cout << "invalid input"<<endl;
        cout << "please enter again: ";
        cin >> isSaying;
        
    }
    
    if(isSaying == "cricle")
        {
            double r;
            cout << "enter a r: ";
            cin >> r;
            area = 3.14 * r * r;
            cout << "the area is: " << area << endl;  
        }
    else
        {
            double h;
            double l;
            cout << "enter h and l: ";
            cin >> h;
            cin >> l;
            area = h * l ;
            cout << "the area is: " << area << endl;   
        }
        
    
    return 0;
}