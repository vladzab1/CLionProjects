//
// Created by vladosik on 11/13/26.
//

#include <iostream>
#include "Digital_counter.h"

int main() {
    Digital_counter dcounter(3, 0);
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getStartNum() << std::endl;
    std::cout << dcounter.getEndNum() << std::endl;
    dcounter.setEndNum(5);
    dcounter.setStartNum(1);
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;
    dcounter.addNumToCounter();
    std::cout << dcounter.getNumFromCounter() << std::endl;

}
