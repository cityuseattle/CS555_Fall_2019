#include <iostream>
#include <string>

using namespace std;

class Array
{
private:
	int m_nSize; 
	int* m_nData; //Integer pointer type
public:
	Array(int nSize = 10);
	// already implemented 
	Array& operator=(const Array& ArrayCopy);
	int& operator[](int nIndex);
	void print(); 
	~Array();

	// you will be implementing following 3 methods
	int len();
	bool operator==(const Array& rhs);
	Array& add(const Array& ArrayRight);
};