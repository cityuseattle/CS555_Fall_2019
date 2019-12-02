
#include <iostream>
#include <string>

using namespace std;

class Array
{
private:
	int m_nSize;
	int* m_nData;
public:
	Array(int nSize = 10);
	// already implemented 
	Array& operator=(const Array& ArrayCopy);
	int& operator[](int nIndex);
	void print();// print the arrays 
	~Array();// destructor


	int len();// returns the lenght of array
	bool operator==(const Array& rhs); // comapre the lenght of the arrays
	Array& add(const Array& ArrayRight);// adding two arrays by elements
};