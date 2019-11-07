#include <iostream>
using namespace std;

class fraction{
    private:
    int m_n;
    int m_d;
    
    public:
    fraction(){
        m_n=0;
        m_d=1;
    }
    int getn(){return m_n;}
    int getd(){return m_d;}
    double getv(){
        return static_cast<double>(m_n)/m_d;
    }
};

int main(){
    fraction f;
    cout<<f.getn()<<"/"<<f.getd()<<'\n';

    return 0;
}