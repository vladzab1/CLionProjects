#include <iostream>
class Point {
    // public, private, protected
    int x;
    int y;
public:
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
    Point () {
        x = 0;
        y = 0;
    }
    void setX(int val) {
        if (val>0) {
        x = val;
        }
    }
    int getX() {
        return x;
    }
    void Print() {
        std::cout<<x<<", " << y<<std::endl;
    }
};

class Fractions {
    int numerator = 0;
    int denominator = 0;

    public:
    Fractions(int numeratorVal, int denominatorVal) {
        numerator = numeratorVal;
        if (denominatorVal != 0) {
            denominator = denominatorVal;
        } else {

            denominator = 1;
        }
    }
    void setNumerator(int numeratorVal) {
        numerator = numeratorVal;
    }
    void setDenominator(int denominatorVal) {
        if (denominatorVal != 0) {
            denominator = denominatorVal;
        } else {
            denominator = 1;
        }
    }
    int getNumerator() {
        return numerator;
    }
    int getDenominator() {
            return denominator;
    }
    void Print() {
        std::cout<< "Numerator: " <<numerator<<"  Denominator: "<<denominator<<std::endl;
    }
};

int main () {
    // /*
    //  Encapsulation
    //  Inheritace
    //  Polymorhism
    //  --Abstraction
    //  */
    // Point p(1,2);
    // p.Print();
    // p.setX(5);
    // p.Print();

    Fractions f(1,0);
    f.Print();
    f.setNumerator(2);
    f.setDenominator(3);
    f.Print();

    std::cout << f.getNumerator() << std::endl;
    std::cout << f.getDenominator() << std::endl;
}