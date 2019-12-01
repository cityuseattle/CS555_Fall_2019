/*
	Implementation of class Array (check definition of this class in the array.h header file).
    Methods of this class:

        Array(int nSize = 10)                       -> creates a array
     
        Array &operator=(const Array &ArrayCopy);   -> copy values from one array to another. 
        int &operator[](int nIndex);                -> store and element in a array
        void print();                               -> print all the values of the array 
        ~Array();                                   -> destructor 

        int len();                                  -> returns the size of the array
        bool operator==(const Array& rhs);          -> compare 2 arrays: 
                                                        if different sizes returns false 
                                                        if any position contains different values returns false 
        Array &add(const Array &ArrayRight);        -> add values of 2 arrays, position by position

    Coded by: Ruan and Mario
*/

#include <iostream>
#include <string>
//#include "Point.h"
//#include "Distance.h"
//#include "Shape.h"
#include "array.h"
using namespace std;


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
