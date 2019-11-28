#include <iostream>
#include <string>
using namespace std;


class Array
{
    private:
        int m_nSize;
        int *m_nData;
    public:

        // constructor 
        // if size is not specified it will be 10 
        Array(int nSize = 10);

        // gets the  reference object
        Array &operator=(const Array &ArrayCopy);

        // define overload operator [] to access the indexes of array 
        int &operator[](int nIndex);

        // print out the elements of the array 
        void print();
        ~Array();    

        // get the length of array 
        int len();

        // define overload operator== to compare the arrays
        bool operator==(const Array& rhs);

        // function that adds the elements of two same sized arrays 
        Array &add(const Array &ArrayRight);
};