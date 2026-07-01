#include <iostream>

int main() {


      //////////
     //1 task//
    //////////
    // int numStart = 100;
    // int numEnd = 999;
    // int count = 0;
    // int num1 , num2 , num3;
    // int num = 0;
    //
    // for (int i = numStart; i <= numEnd; i++) {
    //      num = i;
    //      num3 = num % 10;
    //      num = num / 10;
    //      num2 = num % 10;
    //      num = num / 10;
    //      num1 = num % 10;
    //
    //      if (num1 == num2 || num1 == num3 || num2 == num3) {
    //          count++;
    //      }
    // }
    // std::cout <<"Number of numbers with two identical digits from "<< numStart << " to " << numEnd <<" is "<< count << std::endl;



      //////////
     //2 task//
    //////////
    // int numStart = 100;
    // int numEnd = 999;
    // int count = 0;
    // int num1 , num2 , num3;
    // int num = 0;
    //
    // for (int i = numStart; i <= numEnd; i++) {
    //     num = i;
    //     num3 = num % 10;
    //     num = num / 10;
    //     num2 = num % 10;
    //     num = num / 10;
    //     num1 = num % 10;
    //
    //     if (num1 != num2 && num2 != num3 && num1 != num3) {
    //             count++;
    //     }
    // }
    // std::cout <<"The number of numbers from " << numStart << " to " << numEnd <<" in which all digits are different is: "<< count << std::endl;



      //////////
     //3 task//
    //////////
    int number = 0;
    int num;
    int numRev = 0;
    int num1 = 0;
    int numResult = 0;

    std::cout << "Enter the number: ";
    std::cin >> number;

    for (int i = 0;; i++) {
        num = number % 10;
        number = number / 10;

        if (num != 3 && num != 6) {
            numRev *= 10;
            numRev += num;
        }
        if (number < 1) {
            break;
        }
    }

    for (int j = 0;; j++) {
        num1 = numRev % 10;
        numResult *= 10;
        numResult += num1;
        numRev /= 10;

        if (numRev < 1) {
            break;
        }
    }

    std::cout << numResult;
}