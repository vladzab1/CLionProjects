//
// Created by vladosik on 11/14/26.
//
#include <iostream>
#include "Fraction.h"
int main() {
    Fraction frac(10,20);
    frac.print();
    frac = frac.simplification();
    frac.print();

}