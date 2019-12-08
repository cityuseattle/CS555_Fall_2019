#include <iostream>
#include <string>
// #include Point.h
// #include Distance.h;
// #include Shape.h;

#include "inc/Array.h"
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
    cout <<"Array 1 elements: " << endl;
    theRay1.print();

    // You should be able to run the following statements after you 
    // complete those 3 methods.
    // Array theRay2;
    // theRay2[0] = 0;  
    // theRay2[1] = 2;
    // theRay2[2] = 4;
    // theRay2[3] = 6;
    // theRay2[4] = 8;    
    
    // theRay2.print(); // for displaying the data
    cout << "Array 3:" << endl;
    Array theRay3(5);
    theRay3[0] = 0;  
    theRay3[1] = 2;
    theRay3[2] = 4;
    theRay3[3] = 6;
    theRay3[4] = 8;    
    
    theRay3.print(); 
    
    // Let's add compare the arrays
    cout << "size of theRay1 = " << theRay1.len() << " size of theRay3 = " << theRay3.len() << endl;
    if(theRay1 == theRay3)
    {
        cout << "The arrays are the same" << endl;
    }
    else
    {
        cout << "The arrays are different" << endl;
    }
    
    // Now let's add 2 arrays, and print them out.
    theRay1.add(theRay3); // theRay1 = theRay1 + theRay3;
    cout << "the updated array with the added elements: " << endl;
     theRay1.print(); // for display the data
    

    return 0;
}