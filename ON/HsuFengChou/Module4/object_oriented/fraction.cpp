#include <iostream>

using namespace std;

class Fraction{
    private: 
        int m_numerator;
        int m_dinominator;

    public:
        Fraction (){   //  default constructor
            m_numerator = 0;
            m_dinominator = 1;

    }

        int getNumerator(){ return m_numerator; }
        int getDinominator(){return m_dinominator; }
        double getValue(){
            return static_cast<double>(m_numerator) / m_dinominator;
        }
};

main(){
    Fraction frac;
    cout << frac.getNumerator() << "/" << frac.getDinominator() << '\n';

    return 0;

}