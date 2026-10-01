#include  <iostream>

int main() {
    // int num1;
    // int num2;
    //
    // std::cout << "Enter a number: ";
    // std::cin >> num1;


    // int num = 0;
    // int evenNums = 0;
    // while (true) {
    //     std::cout << "Enter a number: ";
    //     std::cin >> num;
    //
    //     if (num == 0) {
    //         break;
    //     }
    //     if (num % 2 == 0) {
    //         evenNums++;
    //     }
    // }
    // std::cout << "Even numbers: " << evenNums << std::endl;

    // int num = 0;
    // int num2 = 0;
    // int numwhisfive = 0;
    //
    // while (true) {
    //     std::cout << "Enter a number: ";
    //     std::cin >> num;
    //
    //     if (num == 0) {
    //         break;
    //     }
    //     while (num > 0) {
    //         num2 = num % 10;
    //         num = num / 10;
    //         if (num2 == 5) {
    //             numwhisfive++;
    //             break;
    //         }
    //     }
    // }
    //
    // std::cout << numwhisfive << std::endl;

    // const int size = 5;
    // int numbers[size];
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout << "Enter number " << i+1 << ": ";
    //     std::cin >> numbers[i];
    // }
    //
    // for (int i = 0; i < size; i++) {
    //    std::cout << numbers[i];
    // }


    // const int size = 5;
    // int numbers[size];
    // int perimeter;
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout << "Enter enter the length of the side " << i+1 << ": ";
    //     std::cin >> numbers[i];
    // }
    //
    // for (int i = 0; i < size; i++) {
    //     perimeter += numbers[i];
    // }
    //
    // std::cout << "perimeter "<< perimeter << std::endl;


    const int Size = 12;
    int monthlyProfit[Size];
    int bestMonth = 1;
    int worstMonth = 1;

    for (int i = 0; i < Size; i++) {
        std::cout << "Enter the company's profit for " << i + 1 << " month: ";
        std::cin >> monthlyProfit[i];
    }

    for (int i = 0; i < Size; i++) {
        if (monthlyProfit[worstMonth - 1] > monthlyProfit[i]) {
            worstMonth = i + 1;
        }
        if (monthlyProfit[bestMonth - 1] < monthlyProfit[i]) {
            bestMonth = i + 1;
        }
    }

    std::cout << "The most profitable month was "<< bestMonth <<" with a profit of "<<monthlyProfit[bestMonth-1]<<"" << std::endl;
    std::cout << "The most unprofitable month was "<<worstMonth<<" with a profit of "<<monthlyProfit[worstMonth-1]<<"" << std::endl;


}