#include <iostream>
#include <stdexcept>
#include "fraction.h"
using namespace std;


Fraction:: Fraction(){ //default constructor
    m_numerator = 0;
    m_denominator = 1;
    }

    int Fraction::getNumerator() {
        return m_numerator;
    }

    int Fraction::getDenominator(){
        return m_denominator;
    }

    double Fraction::getValue(){
        return static_cast<double> (m_numerator) / m_denominator;
    }

int main() {
  Fraction frac; // Since no arguments, calls Fraction() default constructor
  cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';

  return 0;
}
