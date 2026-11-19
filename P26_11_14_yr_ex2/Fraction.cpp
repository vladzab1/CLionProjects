//
// Created by vladosik on 11/14/26.
//

#include "Fraction.h"
#include <iostream>

    int Fraction::findCommonDenominator(int num1, int num2) {
    int i;
    int tmpNum = num1;
    if (tmpNum < 0 ) {
        tmpNum = -tmpNum;
    }
    int tmpDen = num2;
    if (tmpDen < 0 ) {
        tmpDen = -tmpDen;
    }

    if (tmpDen >= tmpNum) {
        i = tmpDen;
    } else {
        i = tmpNum;
    }

    while (true) {
        if (i % num1  == 0 && i % num2 == 0) {
            return i;
        }
        i++;
    }
}

Fraction::Fraction() {
    numerator = 1;
    denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    if (denominator != 0) {
        this->denominator = denominator;
    } else {
        this->denominator = 1;
    }
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

void Fraction::setNumerator(int val) {
    numerator = val;
}

void Fraction::setDenominator(int val) {
    if (val != 0) {
        denominator = val;
    }
}

Fraction Fraction::simplification() {
    int i;
    int tmpNum = numerator;
    if (tmpNum < 0 ) {
        tmpNum = -tmpNum;
    }
    int tmpDen = denominator;
    if (tmpDen < 0 ) {
        tmpDen = -tmpDen;
    }

    if (tmpDen >= tmpNum) {
        i = tmpNum;
    } else {
        i = tmpDen;
    }

    int num  = numerator;
    int den = denominator;

    while (i >= 2) {
        if (numerator % i == 0 && denominator % i == 0) {
            num /= i;
            den /= i;
            break;
        }
        i--;
    }
    return Fraction(num, den);
}

void Fraction::print() {
   std::cout << numerator << "/" << denominator << std::endl;
}

Fraction Fraction::operator+(const Fraction &frac) const {
        Fraction f;
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        f.denominator = CommonDenominator;
        f.numerator = (numerator * (CommonDenominator / denominator))
        + (frac.numerator * (CommonDenominator /frac.denominator));
        return f.simplification();
}

Fraction Fraction::operator-(const Fraction &frac) const {
        Fraction f;
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        f.denominator = CommonDenominator;
        f.numerator = (numerator * (CommonDenominator / denominator))
        - (frac.numerator * (CommonDenominator /frac.denominator));
        return f.simplification();
}

Fraction Fraction::operator*(const Fraction &frac) const {
       Fraction f;
        f.numerator = numerator * frac.numerator;
        f.denominator = denominator * frac.denominator;
       return f.simplification();
}

Fraction Fraction::operator/(const Fraction &frac) const {
        if (frac.numerator != 0) {
            Fraction f;
            f.numerator = numerator * frac.denominator;
            f.denominator = denominator * frac.numerator;
            return f.simplification();
        } else {
            return Fraction();
        }
}

bool Fraction::operator<(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 < num2) {
            return true;
        } return false;
}

bool Fraction::operator>(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 > num2) {
            return true;
        } return false;
}

bool Fraction::operator<=(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 <= num2) {
            return true;
        } return false;
}

bool Fraction::operator>=(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 >= num2) {
            return true;
        } return false;
}

bool Fraction::operator==(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 == num2) {
            return true;
        } return false;
}

bool Fraction::operator!=(const Fraction &frac) const {
        int CommonDenominator = findCommonDenominator(denominator, frac.denominator);
        int num1 = (numerator * (CommonDenominator / denominator));
        int num2 = (frac.numerator * (CommonDenominator / frac.denominator));
        if (num1 != num2) {
            return true;
        } return false;
}

Fraction::operator double() const {
    return (double)numerator / denominator;
}

