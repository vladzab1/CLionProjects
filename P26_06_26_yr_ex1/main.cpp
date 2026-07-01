#include <iostream>

int main () {
    // int number;
    // int sum = 0;
    // std::cout << "Enter a number: ";
    // std::cin >> number;
    //
    // for (int i =1; i <= number/2; i++) {
    //     if (number % i == 0) {
    //         sum += i;
    //     }
    // }
    // if (number == sum) {
    //     std::cout << "Number is a perfect";
    // } else {
    //     std::cout << "Number is not a perfect";
    // }


    //
    // for (int i =1; i < 1000; i++) {
    //     int sum = 0;
    //     for (int j =1; j <= i/2; j++) {
    //         if (i % j == 0) {
    //             sum += j;
    //         }
    //     }
    //     if (sum == i) {
    //         std::cout << i << std::endl;
    //     }
    // }


    //     int profit[6]{};
    //     int sum = 0;
    //
    //     for (int i = 0; i < 6; i++) {
    //         std::cout << i << "company's profit for the "<< i << " month: ";
    //         std::cin >> profit[i];
    //     }
    //     for (int i = 0; i < 6; i++) {
    //         sum += profit[i];
    //     }
    //     std::cout << "company profit for 6 months: "<< sum << std::endl;
    //

    // const int size = 6;
    // int number[size];
    //
    // for (int i  = 0; i < size; i++) {
    //     std::cout << "Enter a number: ";
    //     std::cin >> number[i];
    // }
    // for (int i = size - 1; i >= 0; i--) {
    //     std::cout << number[i] << " ";
    // }


    // const int Size = 5;
    // double lengthsSpentagon[Size];
    // double perimeter = 0;
    //
    // for (int i  = 0; i < Size; i++) {
    //     std::cout << "enter the length of "<< i-1 <<" side of the 5-sided polygon: ";
    //     std::cin >> lengthsSpentagon[i];
    // }
    //
    // for (int i = 0; i < Size; i++) {
    //     perimeter += lengthsSpentagon[i];
    // }
    //
    // std::cout <<"Perimeter: "<< perimeter;


    // const int Size = 12;
    // int monthlyProfit[Size];
    // int bestMonth = 0;
    // int worstMonth = 0;
    // for (int i  = 0; i < Size; i++) {
    //     std::cout << "Enter the company's profit for "<< i+1 <<" month: ";
    //     std::cin >> monthlyProfit[i];
    // }
    // bestMonth = monthlyProfit[0];
    // worstMonth = monthlyProfit[0];
    //
    // for (int i = 0; i < Size; i++) {
    //      if (monthlyProfit[i] > bestMonth) {
    //          bestMonth = monthlyProfit[i];
    //      }
    //      if (monthlyProfit[i] < worstMonth) {
    //          worstMonth = monthlyProfit[i];
    //      }
    // }
    // for (int i = 1; i < Size; i++) {
    //     if (monthlyProfit[i] > monthlyProfit[bestMonth]) {
    //         bestMonth = i;
    //     }
    //
    //     if (monthlyProfit[i] < monthlyProfit[worstMonth]) {
    //         worstMonth = i;
    //     }
    // }
    // std::cout << "The best month is: " << bestMonth + 1<< " with profit " << monthlyProfit[bestMonth] << std::endl;
    //
    // std::cout << "The worst month is: " << worstMonth + 1<< " with profit " << monthlyProfit[worstMonth] << std::endl;
    //
    srand(time(0));

    // int const size = 10;
    // int arr[size];
    //const int Size = 12;
    //    int monthlyProfit[Size];
    //    int bestMonth = 0;
    //    int worstMonth = 0;
    //    for (int i  = 0; i < Size; i++) {
    //        std::cout << "Enter the company's profit for "<< i+1 <<" month: ";
    //        std::cin >> monthlyProfit[i];
    //    }
    // for (int i = 0; i < size; i++) {
    //     arr[i] = rand() % 20-10;
    // }
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout << arr[i] << " ";
    // }


    // const int Size = 12;
    // int monthlyProfit[Size];
    // int bestMonth = 0;
    // int worstMonth = 0;
    //
    // for (int i  = 0; i < Size; i++) {
    //     monthlyProfit[i] = rand()%9000+1000;
    // }
    // for (int i  = 0; i < Size; i++) {
    //     std::cout << monthlyProfit[i] << " ";
    // }
    // std::cout << std::endl;
    //
    // int min_mouth = 0;
    // int max_mouth = 0;
    //
    // for (int i  = 1; i < Size; i++) {
    //     if (monthlyProfit[min_mouth] > monthlyProfit[i]) {
    //         min_mouth = i;
    //     }
    //     if (monthlyProfit[max_mouth] > monthlyProfit[i]) {
    //         max_mouth = i;
    //     }
    // }
    // std::cout<< "Minimal profit is: " << min_mouth+1 << std::endl;
    // std::cout << "Maximum profit is " << max_mouth+1 << std::endl;



    const int size = 20;
    int numbers[20]{};

    for (int i = 0; i <= size; i++) {
        numbers[i] = rand() % 100;
    }
    for (int i = 0; i <= size; i++) {
        if (numbers[i] == 0) {
            for (int j = i;j < numbers[size]; j++) {
                numbers[j] = numbers[j-1];
            }
        }
    }
}