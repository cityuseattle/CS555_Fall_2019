#include <iostream>
using namespace std;

class Array
{
private:
    int m_nsize;
    int m_ndata;

public:
    Array(int nsize=10);
    int len();
    void print();
    Array &add(const Array &ArrayRight);
    Array &opertaor = (const Array &ArrayCopy);
    bool operator ==(const Array& rhs);

    int &operator [] (int nIndex);
    ~Array();


    
};

array::array(/* args */)
{
}

array::~array()
{
}

int main(){
    Array theRay(-1);

    return 0;
    
}
