//
// Created by vladosik on 11/14/26.
//


class Fraction {
   int numerator;
   int denominator;
   public:
   Fraction();
   Fraction(int numerator, int denominator);
   int getNumerator();
   int getDenominator();
   void setNumerator(int val);
   void setDenominator(int val);
   Fraction simplification();
   void print();

};


