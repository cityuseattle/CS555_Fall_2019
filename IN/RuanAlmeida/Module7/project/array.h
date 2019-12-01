/*
    Header file with the definition of class Array.
    See the implementation at array.cpp file 
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
        void print();
        ~Array();    

        // you will be implementing following 3 methods
        int len();
        bool operator==(const Array& rhs);
        Array &add(const Array &ArrayRight);        
};