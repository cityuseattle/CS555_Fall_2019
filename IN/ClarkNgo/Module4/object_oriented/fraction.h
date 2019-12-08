#ifndef fraction_h
#define fraction_h
#endif

class Fraction {
    private:
        int m_numerator;
        int m_denominator;

    public:
        Fraction();//default constructor

        int getNumerator();

        int getDenominator();

        double getValue();
};
