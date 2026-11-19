//
// Created by vladosik on 11/14/26.
//
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction frac(2,3);
    frac.print();
    frac = frac.simplification();
    frac.print();

    Fraction frac2(1,6);
    frac2.print();

    if (frac > frac2) {
        std::cout << "Frac 1 is bigger" << std::endl;
    } else {
        std::cout << "Frac 2 is bigger" << std::endl;
    }

    if (frac < frac2) {
        std::cout << "Frac 2 is bigger" << std::endl;
    } else {
        std::cout << "Frac 1 is bigger" << std::endl;
    }

    if (frac <= frac2) {
        std::cout << "Frac 2 is bigger" << std::endl;
    } else {
        std::cout << "Frac 1 is bigger" << std::endl;
    }

    if (frac >= frac2) {
        std::cout << "Frac 1 is bigger" << std::endl;
    } else {
        std::cout << "Frac 2 is bigger" << std::endl;
    }

    if (frac == frac2) {
        std::cout << "Frac 1 and Frac 2 is simular" << std::endl;
    } else {
        std::cout << "Frac 1 and Frac 2 is different" << std::endl;
    }

    if (frac != frac2) {
        std::cout << "Frac 1 and Frac 2 is different" << std::endl;
    } else {
        std::cout << "Frac 1 and Frac 2 is simular" << std::endl;
    }

    Fraction frac3;
    frac3 = frac + frac2;
    frac3.print();
    frac3 = frac - frac2;
    frac3.print();
    frac3 = frac * frac2;
    frac3.print();
    frac3 = frac / frac2;
    frac3.print();

    double num = (double)frac3;
    std::cout << "Frac 3 is " << num << std::endl;
}