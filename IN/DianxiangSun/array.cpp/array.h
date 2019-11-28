
#include <iostream>
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
        void print(); //to  the array contents
        ~Array();    

        // you will be implementing following 3 methods
        int len(); //to return the number of elements
        bool operator==(const Array& rhs); // to overload '==' operator to compare the size of two arrays
        Array &add(const Array &ArrayRight); // // to add 2 arrays and return the active reference object (*this)       
};
