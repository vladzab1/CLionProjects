#include <iostream>

int main () {
    double S= 0;
    double v =0;
    double t =0;
    double a =0;

    std::cout << "Enter the speed: " << std::endl;
    std::cin >> v;

    std::cout << "Enter the time: " << std::endl;
    std::cin >> t;

    std::cout << "Enter acceleration: " << std::endl;
    std::cin >> a;

    S = v * t + (a*(t*t)) /2;

    std::cout << "Distance traveled: " << S << std::endl;
}