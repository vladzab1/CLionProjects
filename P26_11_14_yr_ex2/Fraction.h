//
// Created by vladosik on 11/14/26.
//
#pragma once


class Fraction {
   int numerator;
   int denominator;
   static int findCommonDenominator(int num1, int num2);
   public:
   Fraction();
   Fraction(int numerator, int denominator);
   int getNumerator();
   int getDenominator();
   void setNumerator(int val);
   void setDenominator(int val);
   Fraction simplification();
   void print();

   Fraction operator+(const Fraction &frac) const;
   Fraction operator-(const Fraction &frac) const;
   Fraction operator*(const Fraction &frac) const;
   Fraction operator/(const Fraction &frac) const;
   bool operator<(const Fraction &frac) const;
   bool operator>(const Fraction &frac) const;
   bool operator<=(const Fraction &frac) const;
   bool operator>=(const Fraction &frac) const;
   bool operator==(const Fraction &frac) const;
   bool operator!=(const Fraction &frac) const;
   operator double() const;
};


