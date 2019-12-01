#include <iostream>
#include <string>
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
// to return the number of elements
int Array::len()
{
    int size = m_nSize;
    return size;
}

// to add 2 arrays and return the active reference object (*this)
Array&Array::add(const Array &RHS)
{
    // checks the size of both the arrays 
    if(m_nSize != RHS.m_nSize)
    {
        cout << "The size is not equal" << endl;
    }
    else{
    //if size is the same it adds the elements  
    // iterates through the array
   for(int i = 0; i<m_nSize; i++)
   {
      m_nData[i] += RHS.m_nData[i] ;

   }
    }

    return *this;
}

// to overload '==' operator to compare the size of two arrays
bool Array::operator==(const Array& RHS) // RHS = right hand side
{
    bool bRet = true;

    if (m_nSize != RHS.m_nSize)
    {
        bRet = false;

    }

    return bRet;
}
