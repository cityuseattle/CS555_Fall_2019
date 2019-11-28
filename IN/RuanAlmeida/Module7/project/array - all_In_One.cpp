#include <iostream>
#include <string>
//#include "Point.h"
//#include "Distance.h"
//#include "Shape.h"
//#include "Array.h"
using namespace std;

class Array
{
    private:
        int m_nSize;
        int *m_nData;
    public:
        Array(int nSize = 10);
        // already implemented 
        Array &operator=(const Array &ArrayCopy);
        int &operator[](int nIndex);
        void print();
        ~Array();    

        // you will be implementing following 3 methods
        int len();
        bool operator==(const Array& rhs);
        Array &add(const Array &ArrayRight);        
};
Array::Array(int nSize)
{
    if(nSize > 0)
    {
        m_nSize = nSize;
    }
    else
    {
        m_nSize = 1;
    }
    m_nData = new int[m_nSize];

    for(int i = 0; i < m_nSize; i++)
    {
        m_nData[i] = 0;
    }
}
Array::~Array()
{
    if(m_nData != nullptr)
    {
        delete m_nData;
    }
}
Array&Array::operator=(const Array &ArrayCopy)
{
    if(m_nSize != ArrayCopy.m_nSize)
    {
        delete [] m_nData;
        m_nSize = ArrayCopy.m_nSize;
        m_nData = new int[m_nSize];
    }
    for(int i = 0; i < m_nSize; i++)
        m_nData[i] = ArrayCopy.m_nData[i];

    return *this;
}
int &Array::operator[](int nIndex)// returning a reference object
{
    if(nIndex < 0 || nIndex >= m_nSize)
    {
        nIndex = 0;
    }
    return (m_nData[nIndex]); // storing the element to m_nData[] inside
}
void Array::print()
{
    for(int i = 0; i < m_nSize; i++)
        cout << m_nData[i] << endl;
    return;
}

int Array::len()
{
     int size;
    // 
    // your implementation to update size with the size of "this array" and return
    //

	 size = m_nSize;// size = sizeof(m_nData)/sizeof(m_nData[0]);
     
	 return size;
}

Array&Array::add(const Array &RHS)
{
    //
    // your implementation for adding RHS value into "this" array (*this = *this + RHS)
    //
    
    for(int i = 0; i < RHS.m_nSize; i++)
		m_nData[i] = m_nData[i] + RHS.m_nData[i];
	
    return *this;
}

bool Array::operator==(const Array& RHS) // RHS = right hand side
{
    bool bRet = true;

    // 
    // your implementation for comparison (*this == RHS)
    //
    if(m_nSize != RHS.m_nSize)
    {
        bRet = false;  //cout << "different sizes";
    }
    for(int i = 0; i < m_nSize; i++) {
        if (m_nData[i] != RHS.m_nData[i]) {
		  	 bRet = false;  // cout << "different elements " << m_nData[i] << " and " << RHS.m_nData[i];   
			 break;
		}	   
	}	

    return bRet;
}
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
    cout << "theRay1:" << endl;
	theRay1.print();

    // You should be able to run the following statements after you 
    // complete those 3 methods.
     Array theRay2(5);
     
	 theRay2[0] = 0;  
     theRay2[1] = 2;
     theRay2[2] = 4;
     theRay2[3] = 6;
     theRay2[4] = 8;    
     /*
	 theRay2[0] = 1;  
     theRay2[1] = 3;
     theRay2[2] = 5;
     theRay2[3] = 7;
     theRay2[4] = 9;    
*/
	 cout << "theRay2:" << endl;
     theRay2.print(); // for displaying the data
     
    // Let's add compare the arrays
     cout << "size of theRay1 = " << theRay1.len() << " size of theRay2 = " << theRay2.len() << endl;
     if(theRay1 == theRay2)
     {
         cout << "The arrays are the same" << endl;
     }
     else
     {
         cout << "The arrays are different" << endl;
     }
    
	
    // Now let's add 2 arrays, and print them out.
     theRay1.add(theRay2); // theRay1 = theRay1 + theRay2;
	 cout << "theRay1 + theRay2:" << endl;
     theRay1.print(); // for display the data
    

    return 0;
}