
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
        void print();// print the values inside the array by using the length of the array as a delimiter
        ~Array();   

        // you will be implementing following 3 methods
        int len();// calculating the length of the arrays
        bool operator==(const Array& rhs); //checking if the length of the array 1 and array 2 are same 
        Array &add(const Array &ArrayRight); //adding 2 arrays by passing the 2nd array as parameter and using *this for the 1st array       
};


