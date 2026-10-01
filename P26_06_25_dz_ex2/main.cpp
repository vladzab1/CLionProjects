#include <iostream>

int main() {
    int action = 0;

    for (int f = 0; ;f++) {
    std::cout << "1 - Draw upper right triangle" << std::endl;
    std::cout << "2 - Draw lower left triangle" << std::endl;
    std::cout << "3 - Draw top-centered triangle" << std::endl;
    std::cout << "4 - Draw bottom-centered triangle" << std::endl;
    std::cout << "5 - Draw hourglass shape" << std::endl;
    std::cout << "6 - Exit " << std::endl;
    std::cout << "Choose an action: ";
    std::cin >> action;
    std::cout << "\n" ;

    if (action == 1) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                if (i == j || i <= j) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else if (action == 2) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                if (i == j || i >= j) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else if (action == 3) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                if ( i <= j && i + j <= 10) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    }
    else if (action == 4) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                if (i >= j && i + j >= 10) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else if (action == 5) {
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                if ((i >= j && i + j >= 10) || (i <= j && i + j <= 10)) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else if (action == 6) {
        std::cout << "Exiting the program!" << std::endl;
        break;
    }
    }
}