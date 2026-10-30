//
// Created by vladosik on 10/29/26.
//
#include <iostream>
#include "calc.h"
int main () {
    int n1 = 0, n2 = 0;
    char operation;
    int result;
    std::cout << "Calculator" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter number 1-> ";
    std::cin >> n1;
    std::cout << "Enter number 2-> ";
    std::cin >> n2;
    std::cout << "Choose operation: " << std::endl;
    std::cin >> operation;
    if (calculate(n1,n2, operation, result)) {
        std::cout <<n1 <<" " <<operation<<" "<< n2
    << " = " << result << std::endl;
    } else {
       std::cout << "Uncorrected operator" << std::endl;
    }

}