#include <filesystem>
#include <iostream>

 int main () {
//
//     int num, c= 0, sum = 0;
//
//     std::cout << "Enter a number: ";
//     std::cin >> num;
//
//     while (c <= num) {
//         sum += c;
//         c++;
//     }
//     std::cout<< "Sum of numbers: " << sum << std::endl;
//

     // int number = 0;
     // int numbersInNum = 0;
     // std::cout << "Enter a number: ";
     // std::cin >> number;
     // number = abs(number);
     // if (number == 0) {
     //     numbersInNum = 1;
     // } else {
     //     while (number > 0) {
     //         number = number / 10;
     //         numbersInNum++;
     //     }
     // }
     //
     // std::cout << numbersInNum;
     //
     // int number = 0;
     // int sum = 0;
     //
     // std::cout << "Enter a number: ";
     // std::cin >> number;
     //
     //     while (number > 0) {
     //        sum  += number % 10;
     //         number = number / 10;
     // }
     // std::cout << sum;

     // int num  = 0;
     // int sum = 0;
     //
     // std::cout << "Enter a number: ";
     // std::cin >> num;
     //
     // for (int i = 1; i <= num; i++) {
     //     sum += i;
     // }
     // std::cout << sum;


     // int num1 = 0;
     // int num2 = 0;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num1;
     // std::cout << "Enter a number 2: ";
     // std::cin >> num2;
     //
     // for (; num1 <= num2; num1++) {
     //     std::cout << num1 << std::endl;
     // }
     //
     // int num1 = 0;
     // int num2 = 0;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num1;
     // std::cout << "Enter a number 2: ";
     // std::cin >> num2;
     //
     // for (int i = num1; i <= num2; i++) {
     //     if (i % 2 != 0) {
     //         std::cout << i << std::endl;
     //     }
     // }


     // int num1 = 0;
     // int num2 = 0;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num1;
     // std::cout << "Enter a number 2: ";
     // std::cin >> num2;
     //
     // for (int i = num2; i >= num1; i--) {
     //     if (i % 2 == 0) {
     //         std::cout << i << std::endl;
     //     }
     // }

     // int num1 = 0;
     // int num2 = 0;
     // int order = 0;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num1;
     // std::cout << "Enter a number 2: ";
     // std::cin >> num2;
     // std::cout << "Enter the order reflection: ";
     // std::cin >> order;
     //
     //
     // if (order == 1) {
     //     for (int i = num1; i <= num2; i++) {
     //             std::cout << i << std::endl;
     //     }
     // } else if (order == 2) {
     //     for (int i = num2; i >= num1; i--) {
     //             std::cout << i << std::endl;
     //     }
     // } else {
     //     std::cout << "Incorrect display method";
     // }

     //
     // int num1 = 0;
     // int num2 = 0;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num1;
     // std::cout << "Enter a number 2: ";
     // std::cin >> num2;
     //
     // if (num1 > num2) {
     //     std::swap(num1, num2);
     // }
     //
     // for (int i = num2;; i+=num2) {
     //     if (i % num1 == 0 && i % num2 == 0) {
     //         std::cout << " NCK: " <<  i << std::endl;
     //         break;
     //     }
     // }

     // int num = 0;
     // int factorial = 1;
     //
     // std::cout << "Enter a number 1: ";
     // std::cin >> num;
     //
     // for (int i = 1; i <= num; i++) {
     //     factorial *= i;
     // }
     // std::cout << "Factorial: "<< factorial;

     //
     // int number;
     // std::cout << "Enter the length of the line : ";
     // std::cin >> number;
     //
     //
     // for (int i = 1; i <= number; i++) {
     //     std::cout << '*';
     // }

     // int number;
     // char symbol;
     //
     // std::cout << "Enter the length of the line: ";
     // std::cin >> number;
     // std::cout << "Enter the symbol that will draw the line: ";
     // std::cin >> symbol;
     //
     //
     // for (int i = 1; i <= number; i++) {
     //     std::cout << symbol;
     // }

     int action;
     int num1 = 0;
     int num2 = 0;
     for (int i = 0;; i++) {
         std::cout << "1 - Find the minimum of two numbers";
         std::cout << "2 - Find the max of two numbers";
         std::cout << "3 - Exit";
         std::cout << "Cuose action(1, 2, 3): ";
         std::cin >> action;

         if (action == 2) {
             std::cout << "Enter a number 1: ";
             std::cin >> num1;
             std::cout << "Enter a number 2: ";
             std::cin >> num2;
             if (num1 > num2) {
                 std::cout << "Max: " << num1;
             } else if (num1 < num2) {
                 std::cout << "Max: " << num2;
             } else {
                 std::cout << "the numbers are the same";
             }
         } else if (action == 1) {
             std::cout << "Enter a number 1: ";
             std::cin >> num1;
             std::cout << "Enter a number 2: ";
             std::cin >> num2;
             if (num1 < num2) {
                 std::cout << "Min: " << num1;
             } else if (num1 > num2) {
                 std::cout << "Min: " << num2;
             } else {
                 std::cout << "the numbers are the same";
             }
         } else if (action == 3) {
           break;
         } else {
             std::cout <<"Incorect action";
         }
     }
}