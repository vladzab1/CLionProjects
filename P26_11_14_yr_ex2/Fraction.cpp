//
// Created by vladosik on 11/14/26.
//

#include "Fraction.h"

#include <iostream>
#include <ostream>

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
    if (denominator > numerator) {
        i = numerator;
    } else if (denominator < numerator) {
        i = denominator;
    } else {
        return Fraction(1,1);
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
