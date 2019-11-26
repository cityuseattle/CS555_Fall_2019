#include <iostream>
using namespace std;

class Array{
private:
    int m_nSize;
    int *m_nData;
public:
    Array(int nSize=10);
    int len();
    void print();
    Array &add(const Array &ArrayRight);
    Array &operator=(const Array &ArrayCopy);
    int &operator[](int);
    bool operator==(const Array &rhs);

// Constructor
Array::Array(int s){
    if (s<0){
        cout<< "I am resizing the array to 10 elements "<< endl;
        m_nSize=10;
    }
    else{
    m_nSize=s;
    }
    m_nData=new int(m_nSize);
    for(int i = 0; i< m_nSize;i++){
        m_nData[i]=0;
    }
}
// Destructor
Array::~Array(){
    if (m_nData!=nullptr){
        delete m_nData;
    }
}

int Array::len(){
    return sizeof(m_nData)/sizeof(m_nData[0]);
}

void Array::print(){
    for(int i = 0; i< m_nSize;i++){
        cout << "Value of the array: " << m_nData[i]<< endl;
    }
}
Array &Array:: add(const Array &ArrayRight){
    if (m_nSize != ArrayRight.m_nSize){
        cout << "Cannot add because size is not the same" << endl;
        }
    else{
        for(int i = 0; i< m_nSize;i++){
            m_nData[i]+=ArrayRight.m_nData[i];
        }
    } 
}
int &Array:: operator[](int nIndex){
    if (nIndex>=m_nSize || nIndex <0){
        nIndex=0;
        cout <<"Invalid index!! set index to 0"<< endl;
    }
    return m_nData[nIndex];

}
Array &Array:: operator=(const Array &ArrayRight){
    Array ArrayResult(ArrayRight.m_nSize);
    for(int i = 0; i< ArrayResult.m_nSize;i++){
        ArrayResult.m_nData[i]=ArrayRight.m_nData[i];
    }
}

bool Array:: operator==(const Array &rhs){
    bool b=true;

}
};

int main(){
    Array a1(-1);
    a1.print();

    Array a2(4);

}

