# include<iostream>
using namespace std;

class Fraction{
    private:
        int m_numerator;
        int m_denomintor;

        public:
            Fraction()
            {
                m_numerator=0;
                m_denomintor=1;
            }
            
            int getNumerator()
            {
                return m_numerator;
            }

            int getDenominator()
            {
                return m_denomintor;
            }

            double getValue()
            {
                return static_cast<double>(m_numerator/m_denomintor);
            }

};

int main()
{
    Fraction frac;

    cout<<frac.getNumerator()<<"/"<<frac.getDenominator()<<"\n";
    return 0;
}