#include <iostream>
#include "Array.h"
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
    std::cout << "Length of array = " << sizeof(size) << std::endl;
    //
    return size;
}

Array&Array::add(const Array &RHS)
{
    //
    //*this = *this + RHS
    //

    return *this;
}

bool Array::operator==(const Array& RHS) // RHS = right hand side
{
    bool bRet = true;

    // 
    // your implementation for comparison (*this == RHS)
    //

    return bRet;
}
