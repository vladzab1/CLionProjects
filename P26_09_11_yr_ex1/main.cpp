#include <iostream>
#include <iomanip>
#include <ctime>

void print_hello_world(int num=1) {
    for (int i = 0; i < num; i++) {
        std::cout << "Hello World!" << std::endl;
    }
}
double sum (double a,double b) {
    return a+b;
}

void drawRect (int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
int factorial (int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
bool numPrime(int number) {
    if (number <= 1) {
        return false;
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int numberCube(int num) {
    return num*num*num;
}
int findMax (int num, int num1) {
    int max = num;
    if (num1 > max) {
        max = num1;
    }
    return max;
}
bool positiveOrNegative (int num) {
    if (num < 0) {
        return false;
    } else {
        return true;
    }
}
int main () {
    // srand(time(0));
    //
    // const int  row = 5, col = 10;
    // int numbers[row][col];
    // int numbersSum2[row][col/2];
    //
    //
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         numbers[i][j] = rand() % 51;
    //     }
    // }
    //
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         std::cout <<std::setw(2)<< numbers[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << std::endl;
    //
    //
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col-1; j+=2) {
    //           numbersSum2[i][j/2] = numbers[i][j] + numbers[i][j+1];
    //     }
    // }
    //
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col/2; j++) {
    //         std::cout << numbersSum2[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // print_hello_world(3);
    std::cout << "factorial 5 = " << factorial(5) << std::endl;
    // drawRect(4,5);
    std::cout << "num 6 = " << numPrime(6) << std::endl;

    std::cout << "Cube of 3 = " << numberCube(3) << std::endl;

     std::cout << "max of number 3 and 5: " << findMax(3,5) << std::endl;

     std::cout << "number 3 is positive?  " << std::boolalpha << positiveOrNegative(3) << std::endl;
    std::cout << "number -2 is positive?  " << std::boolalpha << positiveOrNegative(-2) << std::endl;
}
