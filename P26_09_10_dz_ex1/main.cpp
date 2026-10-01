#include <iostream>
#include <ctime>
#include <iomanip>
int main() {
    srand(time(0));
    //
    // const int SIZE = 10;
    // int numbers[SIZE]{};
    // int numbersFirstPart [SIZE/2]{};
    // int numbersSecondPart [SIZE/2]{};
    //
    //
    // for (int i = 0; i < SIZE; i++) {
    //     numbers[i] = rand() % 20;
    // }
    //
    // for (int i = 0; i < SIZE; i++) {
    //     std::cout << numbers[i] << " ";
    // }
    // std::cout << std::endl;
    //
    //
    //
    // for (int i = 0; i < SIZE/2; i++) {
    //     numbersFirstPart[i] = numbers[i];
    // }
    // for (int i = SIZE/2; i < SIZE; i++) {
    //     numbersSecondPart[i-SIZE/2] = numbers[i];
    // }
    //
    //
    // for (int i = 0; i < SIZE/2; i++) {
    //     std::cout << numbersFirstPart[i] << " ";
    // }
    // std::cout << std::endl;
    // for (int i = 0; i < SIZE/2; i++) {
    //     std::cout << numbersSecondPart[i] << " ";
    // }



    const int SIZE = 10;
    int numbers1[SIZE];
    int numbers2[SIZE];
    int numbersSum[SIZE];

    for (int i = 0; i < SIZE; i++) {
        numbers1[i] = rand() % 20;
        numbers2[i] = rand() % 20;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(3) << numbers1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(3) << numbers2[i] << " ";
    }
    std::cout << std::endl;


    for (int i = 0; i < SIZE; i++) {
        numbersSum[i] = numbers1[i] + numbers2[i];
    }

    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE-1) {
            std::cout << "--+";
        } else {
            std::cout << "----";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++) {
        std::cout << std::setw(3) <<numbersSum[i] << " ";
    }
}