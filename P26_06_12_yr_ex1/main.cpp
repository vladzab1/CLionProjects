#include <complex>
#include <iostream>

int main() {
    // int a, b, m;
    // std::cout << "Enter the first number: ";
    // std::cin >> a;
    // std::cout << "Enter the second number: ";
    // std::cin >> b;
    //
    // if (a > b) {
    //      m = a;
    // } else {
    //     m = b;
    // }
    // std::cout << "Max: "<< m << std::endl;
    //


    int a, b, c, max;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the third number: ";
    std::cin >> c;

    max = a;
    if (a > b) {
        max = a;
    }
    if (c > max) {
        max = c;
    }


    // if (a >= b && a >= c) {
    //     max = a;
    // } else {
    //     if (b >= a && b >= c) {
    //         max = b;
    //     }
    //     else {
    //             max = c;
    //     }
    // }
    //
    std::cout << "Max: " << max;


    //
    // int rating1, rating2, rating3, rating4, rating5;
    // double ratingSum;
    // double sumRating;
    //
    //
    // std::cout << "Enter the first reting: ";
    // std::cin >> rating1;
    // std::cout << "Enter the second reting: ";
    // std::cin >> rating2;
    // std::cout << "Enter the third reting: ";
    // std::cin >> rating3;
    // std::cout << "Enter the fourth reting: ";
    // std::cin >> rating4;
    // std::cout << "Enter the fifth reting: ";
    // std::cin >> rating5;
    //
    // ratingSum = rating1 + rating2 + rating3 + rating4 + rating5;
    //
    // sumRating = ratingSum/5.0;
    // if (ratingSum >= 4) {
    //     std::cout << "student admitted to the exam" << std::endl;
    // } else {
    //     std::cout << "student not admitted to the exam" << std::endl;
    // }



    // int num = 0;
    // double dnum = 0;
    //
    // std::cout << "Enter the number: ";
    // std::cin >> num;
    //
    // if (num % 2 == 0) {
    //     num = num * 3;
    //     std::cout << num << std::endl;
    // }
    // else {
    //     dnum = num /2.0;
    //     std::cout << dnum << std::endl;
    // }

    // double number1 = 0;
    // double number2 = 0;
    // double result = 0;
    // char action;
    //
    // std::cout << "Enter the first number: ";
    // std::cin >> number1;
    // std::cout << "Enter the second number: ";
    // std::cin >> number2;
    // std::cout << "Enter the action: ";
    // std::cin >> action;
    //
    // if (action == '+') {
    //     result = number1 + number2;
    //     std::cout << "The result is: " << result << std::endl;
    // }
    // else if (action == '-') {
    //     result = number1 - number2;
    //     std::cout << "The result is: " << result << std::endl;
    // }
    // else if (action == '*') {
    //     result = number1 * number2;
    //     std::cout << "The result is: " << result << std::endl;
    // }
    // else if (action == '/') {
    //     if (number2 == 0) {
    //         std::cout << "and you can't divide by zero" << std::endl;
    //     }
    //     else {
    //         result = number1 / number2;
    //         std::cout << "The result is: " << result << std::endl;
    //     }
    // }
    // else if (action == '%') {
    //     if (number2 == 0) {
    //         std::cout << "and you can't divide by zero" << std::endl;
    //     }
    //     else {
    //         result = (int)number1 % (int)number2;
    //         std::cout << "The result is: " << result << std::endl;
    //     }
    // }
    // else {
    //     std::cout << "wrong action" << std::endl;
    // }

    // char token;
    //
    // std::cout << "Enter a token: ";
    // std::cin >> token;
    //
    // if (isdigit(token)) {
    //     std::cout << "this is digit";
    // }
    // else if (isalpha(token)) {
    //     std::cout << "this is alpha";
    // }
    // else if (ispunct(token)) {
    //     std::cout << "this is punct";
    // }
    // else {
    //     std::cout << "this is another symbol";
    // }


    // int callTime = 0;
    //
    // int const Vodafone = 10;
    // int const Kyivstar = 15;
    // int const Lifecell = 8;
    // int const Mob3 = 6;
    // int const Intertelecom = 8;
    // int const PEOPLEnet = 15;
    // int operatorsC;
    // int cost = 0;
    //
    //
    // std::cout << "Call time: ";
    // std::cin >> callTime;
    // std::cout << "Vodafone -> 1" << std::endl;
    // std::cout << "Kyivstar -> 2" << std::endl;
    // std::cout << "Lifecell -> 3" << std::endl;
    // std::cout << "3Mob -> 4" << std::endl;
    // std::cout << "Intertelecom -> 5" << std::endl;
    // std::cout << "PEOPLEnet -> 6" << std::endl;
    // std::cout << "select the operator you are calling from:  "<< cost;
    // std::cin >> operatorsC;
    //
    //
    //
    // if (operatorsC == 1) {
    //     cost = Vodafone * callTime;
    //     std::cout << "Call cost: "<< cost << std::endl;
    // }
    // else if (operatorsC == 2) {
    //     cost = Kyivstar * callTime;
    //     std::cout << "Call cost: "<< cost << std::endl;
    // }
    // else if (operatorsC == 3) {
    //     cost = Lifecell * callTime;
    //     std::cout << "Call cost: "<< cost << std::endl;
    //
    // }
    // else if (operatorsC == 4) {
    //     cost = Intertelecom * callTime;
    //     std::cout << "Call cost: "<< cost << std::endl;
    //
    // }
    // else if (operatorsC == 6) {
    //     cost = PEOPLEnet * callTime;
    //     std::cout << "Call cost: "<< cost << std::endl;
    // }
    // else {
    //     std::cout << "Invalid operators" << std::endl;
    // }




    // int action = 0;
    // int incomeD = 0;
    // int lateness =0;
    //
    //
    // std::cout << "1 - Calculate how many lines of code you need to write to get the desired salary, taking into account delays";
    // std::cout << "2 - Counting the number of times you can be late to get the desired salary";
    // std::cout << "3 - Salary determination based on the amount of code written and delays";
    // std::cout << "Please select the action: ";
    // std::cin >> action;
    //
    //
    // if (action == 1) {
    //     std::cout << "Enter your desired income: ";
    //     std::cin >> incomeD;
    //     std::cout << "Enter the number of delays: ";
    //     std::cin >> lateness;
    // }
}