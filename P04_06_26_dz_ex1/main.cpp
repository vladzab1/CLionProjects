#include <iostream>

int main() {
    double r1 = 2.0f;
    double r2 = 4.0f;
    double r3 = 8.0f;
    double r0 = 0;
    
    r0 = 1.0f / (1.0f/r1 + 1.0f/r2 + 1.0f/r3);
    std::cout << "r0 = " << r0 << std::endl;
}