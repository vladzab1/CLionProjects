#include <iostream>

int main () {

      //////////
     //1 task//
    //////////
    // const int size = 10;
    // int max_number;
    // int min_number;
    // int numbers[size];
    // srand(time(0));
    //
    //
    // for (int i = 0; i < size; i++) {
    //     numbers[i] = rand() % 101;
    // }
    //
    // max_number = numbers[0];
    // min_number = numbers[0];
    //
    // for (int i = 1; i < size; i++) {
    //     if (numbers[i] > max_number) {
    //         max_number = numbers[i];
    //     }
    //     if (numbers[i] < min_number) {
    //         min_number = numbers[i];
    //     }
    // }
    // std::cout <<"Max number: "<< max_number << std::endl;
    // std::cout <<"Min number: "<< min_number << std::endl;



      //////////
     //2 task//
    //////////
    // const int Size = 12;
    // int monthlyProfit[Size];
    // int bestMonth = 0;
    // int worstMonth = 0;
    //
    // int startMonth = 0;
    // int endMonth = 0;
    //
    //
    // for (int i  = 0; i < Size; i++) {
    //     std::cout << "Enter the company's profit for "<< i+1 <<" month: ";
    //     std::cin >> monthlyProfit[i];
    // }
    //
    // std::cout << "Enter the start month of the range (1-12): ";
    // std::cin >> startMonth;
    // std::cout << "Enter the end month of the range (1-12): ";
    // std::cin >> endMonth;
    //
    // bestMonth = startMonth;
    // worstMonth = startMonth;
    //
    // for (int i = startMonth-1; i <= endMonth-1; i++) {
    //         if (monthlyProfit[worstMonth-1] > monthlyProfit[i]) {
    //             worstMonth = i+1;
    //         }
    //         if (monthlyProfit[bestMonth-1] < monthlyProfit[i]) {
    //             bestMonth = i+1;
    //         }
    // }
    // std::cout << "The most profitable month was "<< bestMonth <<" with a profit of "<<monthlyProfit[bestMonth-1]<<"" << std::endl;
    // std::cout << "The most unprofitable month was "<<worstMonth<<" with a profit of "<<monthlyProfit[worstMonth-1]<<"" << std::endl;




      //////////
     //3 task//
    //////////
//     const int Size = 10;
//     int numbers[Size];
//     srand(time(0));
//
//     int sumN = 0;
//     int productMinMaxEl = 1;
//     int productElementsEvenNum = 1;
//     int sumBetNegativeEl = 0;
//     int minNum;
//     int maxNum;
//     int minIndex = 0;
//     int maxIndex = 0;
//     int firstNnum = -1;
//     int lastNnum = -1;
//
//
//     for (int i = 0; i < Size; i++) {
//         numbers[i] = rand() % 21 - 10;
//     }
//
//     minNum = numbers[0];
//     maxNum = numbers[0];
//
//     for (int i = 0; i < Size; i++) {
//         if (numbers[i] < 0) {
//             sumN += numbers[i];
//         }
//         if (numbers[i] > maxNum) {
//             maxNum = numbers[i];
//             maxIndex = i;
//         }
//         if (numbers[i] < minNum) {
//             minNum = numbers[i];
//             minIndex = i;
//         }
//     }
//
//     if (minIndex > maxIndex) {
//         std::swap(minIndex, maxIndex);
//     }
//     for (int i = minIndex + 1; i < maxIndex; i++) {
//         productMinMaxEl *= numbers[i];
//     }
//
//     for (int i = 0; i < Size; i++) {
//         if ((i + 1) % 2 == 0) {
//             productElementsEvenNum *= numbers[i];
//         }
//     }
//
//     for (int i = 0; i < Size; i++) {
//         if (numbers[i] < 0) {
//             firstNnum = i;
//             break;
//         }
//     }
//     for (int i = Size-1; i >= 0; i--) {
//         if (numbers[i] < 0) {
//             lastNnum = i;
//             break;
//         }
//     }
//     if (firstNnum != -1 && lastNnum != -1 && firstNnum != lastNnum) {
//         for (int i = firstNnum + 1; i < lastNnum; i++) {
//             sumBetNegativeEl += numbers[i];
//         }
//     } else {
//         std::cout << "There are not enough negative numbers to calculate the sum!" << std::endl;
//     }
//     std::cout << "1. Sum of all negative elements: " << sumN << std::endl;
//     std::cout << "2. Product of elements between min and max: " << productMinMaxEl << std::endl;
//     std::cout << "3. Product of elements with even numbers: " << productElementsEvenNum << std::endl;
//     std::cout << "4. Sum of elements between first and last negative: " << sumBetNegativeEl << std::endl;
}