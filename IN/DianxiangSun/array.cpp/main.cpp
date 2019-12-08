#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array theRay1(5); // calling the constructor
    
    // calling [] operator to assign values into theRay object
    // note that theRay object is "NOT" an allocatable datatype 
    // that is why you need to overload [] to assign value to its m_nData 
    // inside [] overload function.
    theRay1[0] = 1;  
    theRay1[1] = 3;
    theRay1[2] = 5;
    theRay1[3] = 7;
    theRay1[4] = 9;    
    // to validate the array contents
    theRay1.print();

    // You should be able to run the following statements after you 
    // complete those 3 methods.
    // Array theRay2
    // theRay2[0] = 0;  
    // theRay2[1] = 2;
    // theRay2[2] = 4;
    // theRay2[3] = 6;
    // theRay2[4] = 8;    
    // 
    // theRay2.print() // for displaying the data
    // 
    // Let's add compare the arrays
    // cout << "size of theRay1 = " << theRay1.len() << " size of theRay2 = " << theRay2.len() << endl;
    // if(theRay1 == theRay2)
    // {
    //     cout << "The arrays are the same" << endl;
    // }
    // else
    // {
    //     cout << "The arrays are different" << endl;
    // }
    //
    // Now let's add 2 arrays, and print them out.
    // theRay1.add(theRay2); // theRay1 = theRay1 + theRay2;
    // theRay1.print(); // for display the data
    //

    return 0;
}