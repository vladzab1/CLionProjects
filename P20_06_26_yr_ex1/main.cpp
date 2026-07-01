#include <iostream>

int main () {
    // int number = 0;
    //
    // std::cout << "Please enter the number: ";
    // std::cin >> number;
    //
    // for (int i = 2;; i++) {
    //     if (number % i == 0 && i != number) {
    //         std::cout << number << " this number is not prime" << std::endl;
    //         break;
    //     }  else if (number == i) {
    //         std::cout << number << " this number is prime" << std::endl;
    //         break;
    //     }
    // }


    // int number;
    //
    // do {
    //     std::cout << "Enmter the number: ";
    //     std::cin >> number;
    //
    // } while (number != 0);

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j >= 4 - (i - 1) && j <= 4 + (i - 1)) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}