#include <iostream>

int main () {
    double L = 0;
    double R = 0;
    double Pi = 3.14;
    double S =0;

    std::cout << "Enter the length of the circle: ";
    std::cin >> L;

    R = L / (2*Pi);
    S = Pi * (R*R);

    std::cout << "Circle area = " << S << std::endl;
}