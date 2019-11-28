#include <iostream>
#include <string>
using namespace std;

class Array
{
    private:
        int m_nSize;
        int *m_nData;
    public:
        Array(int nSize = 10);//the default size of the array
        
        Array &operator=(const Array &ArrayCopy); //assign one array's element to another array
        int &operator[](int nIndex);// returning a reference object
        void print();//print the elements of array
        ~Array();//delete all the array

        int len();//return the length of the array
        bool operator==(const Array& rhs);//compare two arrays' size, if different return false . And compare elements in two arrays, if different return false
        Array &add(const Array &ArrayRight);//summing two arrays'elements by indexs of the bigger array and return the bigger array
  
};