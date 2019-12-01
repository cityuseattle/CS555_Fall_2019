#include "Array.h"

Array::Array(int nSize)
{
	if (nSize > 0)
	{
		m_nSize = nSize;
	}
	else
	{
		m_nSize = 1;
	}
	m_nData = new int[m_nSize];

	for (int i = 0; i < m_nSize; i++)
	{
		m_nData[i] = 0;
	}
}
Array::~Array()
{
	if (m_nData != nullptr)
	{
		delete m_nData;
	}
}
Array& Array::operator=(const Array& ArrayCopy)
{
	if (m_nSize != ArrayCopy.m_nSize)
	{
		delete[] m_nData;
		m_nSize = ArrayCopy.m_nSize;
		m_nData = new int[m_nSize];
	}
	for (int i = 0; i < m_nSize; i++)
		m_nData[i] = ArrayCopy.m_nData[i];

	return *this;
}
int& Array::operator[](int nIndex)// returning a reference object
{
	if (nIndex < 0 || nIndex >= m_nSize)
	{
		nIndex = 0;
	}
	return (m_nData[nIndex]); // storing the element to m_nData[] inside
}
void Array::print()
{
	for (int i = 0; i < m_nSize; i++)
		cout << m_nData[i] << endl;
	return;
}

int Array::len()
{
	if (m_nSize <= 0)
	{
		cout << "invalid length";
	}

	return m_nSize;
}

Array&Array::add(const Array & RHS)
{
	for (int i = 0 ; i < m_nSize; i++)
	{
		this->m_nData[i] += RHS.m_nData[i];
	}
	return *this;
}

bool Array::operator==(const Array & RHS) // RHS = right hand side
{
	bool bRet = true;

	if (this->m_nSize != RHS.m_nSize)
	{
		bRet = true;
	}

	else
	{
		bRet = false;
	}
	// 
	// your implementation for comparison (*this == RHS)
	//

	return bRet;
}
