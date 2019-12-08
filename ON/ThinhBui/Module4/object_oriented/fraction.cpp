#include <iostream>
using namespace std;

class Fraction{
    private:
        int m_num, m_den;
    public:
        Fraction(){
            m_num = 0;
            m_den = 1;
        }
        int getNumerator() { return m_num;}
        int getDeno() { return m_den;}
        double getValue(){
            return static_cast<double>(m_num)/m_den;
        }
};
int main(){
    Fraction frac;
    cout << frac.getNumerator() << "/" <<frac.getDeno() <<endl;
    return 0;
}