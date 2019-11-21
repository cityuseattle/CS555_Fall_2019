#include <iostream>
using namespace std;

class Fraction {
    private:
    int m_numerator;
    int m_denominator;

    public:
    Fraction(){ // default constructor
        m_numerator = 0;
        m_denominator = 1;
    }

    int getNumerator() { return m_numerator; }
    int getDenomerator() { return m_denominator; }
    double getValue(){
        return static_cast<double>(m_numerator) / m_denominator;
    }
};

int main(){
    Fraction frac; // Since no arguments, we call Fraction() default constructor
    cout << frac.getNumerator() << "/" << frac.getDenomerator() << '\n';

    return 0;
}