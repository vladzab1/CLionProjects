#include <iostream>

int main() {
    // int dayNum = 0;
    //
    // std::cout << "Enter the number of day: ";
    // std::cin >> dayNum;
    //
    //
    // if (dayNum == 1) {
    //     std::cout << "Monday";
    // }
    // else if (dayNum == 2) {
    //     std::cout << "Tuesday";
    // }
    // else if (dayNum == 3) {
    //     std::cout << "Wednesday";
    // }
    // else if (dayNum == 4) {
    //     std::cout << "Thursday";
    // }
    // else if (dayNum == 5) {
    //     std::cout << "Friday";
    // }
    // else if (dayNum == 6) {
    //     std::cout << "Saturday";
    // }
    // else if (dayNum == 7) {
    //     std::cout << "Sunday";
    // }
    // else {
    //     std::cout << "Not a valid number of day";
    // }


    //
    // int dayNum = 0;
    // int TypeDay= 0;
    // std::cout << "Enter the number of day: ";
    // std::cin >> dayNum;
    //
    //
    // switch (dayNum) {
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //         std::cout << "Working day";
    //         break;
    //     case 6:
    //     case 7:
    //         std::cout << "Weekend";
    //         break;
    //     default:
    //         std::cout << "Error. wrong day";
    // }


    // int counter = 0;
    // int i = 0;
    //
    // std::cout << "Enter number: ";
    // std::cin >> i;
    //
    // while (counter <= i) {
    //     std::cout << counter << std::endl;
    //     counter++;
    // }

        //
        // int a, b;
        //
        // std::cout << "Enter first border: ";
        // std::cin >> a;
        //
        // std::cout << "Enter second border: ";
        // std::cin >> b;
        //
        // if (a > b) {
        //     std::swap(a, b);
        // }
        //
        // int i = a;
        //
        // std::cout << "All numbers: ";
        // while (i <= b) {
        //     std::cout << i << " ";
        //     i++;
        // }
        //
        // std::cout << "Even numbers: ";
        // i = a;
        // while (i <= b) {
        //     if (i % 2 == 0) {
        //         std::cout << i << " ";
        //     }
        //     i++;
        // }
        //
        // std::cout << "Odd numbers: ";
        // i = a;
        // while (i <= b) {
        //     if (i % 2 != 0) {
        //         std::cout << i << " ";
        //     }
        //     i++;
        // }
        //int a, b;
        //
        //    std::cout << "Enter first border: ";
        //    std::cin >> a;
        //
        //    std::cout << "Enter second border: ";
        //    std::cin >> b;
    // std::cout << "Numbers divisible by 7: ";
    // i = a;
    // while (i <= b) {
    //     if (i % 7 == 0) {
    //         std::cout << i << " ";
    //     }
    //     i++;
        // }


    // int start, finish;
    // int sum = 0;
    //
    // std::cout << "Enter first border: ";
    // std::cin >> start;
    //
    // std::cout << "Enter second border: ";
    // std::cin >> finish;
    //
    //
    //
    // while (start <= finish) {
    //     sum = sum + start;
    //     start++;
    // }
    // std::cout << "Sum = " << sum << std::endl;




    // int sum = 0;
    // int number = 0;
    //
    // while (true) {
    //     std::cout << "Enter a number: ";
    //     std::cin >> number;
    //
    //     if (number == 0) {
    //         break;
    //     }
    //
    //     sum += number;
    // }
    //
    // std::cout << "Sum of numbers: " << sum << std::endl;
    int numberR = 358;

    int number = 0;
    std::cout << "Game: guess the number \n";

    while (true) {
        std::cout << "Enter the number: ";
        std::cin >> number;
        if (number == 0) {
            break;
        }
        else if (number == numberR) {
            std::cout << "You guessed the number!";
            break;
        }
        else if (number > numberR) {
            std::cout << "Try lower \n";
        }
        else {
            std::cout << "Try higher \n";
        }
    }
}