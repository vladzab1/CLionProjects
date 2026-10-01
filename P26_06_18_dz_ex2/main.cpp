#include <iostream>

int main () {

      //////////
     //1 task//
    //////////
    int number = 0;
    int sum = 0;

    int numStart = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    numStart = number;

    while (number <= 500) {
        sum += number;
        number++;
    }
    std::cout << "sum of integers from " << numStart << " to " << 500 << " is " << sum << "\n" << std::endl;



      //////////
     //2 task//
    //////////
    int num = 0;
    int powerNumber = 0;
    int finalValue = 1;

    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Enter the power to which you want to raise the given number: ";
    std::cin >> powerNumber;

    int i = 0;
    while (i < powerNumber) {
        finalValue *=  num;
        i++;
    }

    std::cout << num << " in degree " << powerNumber << " = " << finalValue << std::endl;





      //////////
     //3 task//
    //////////
    int num1 = 1;
    int num2 = 1000;
    double sum1 = 0;

    while (num1 <= num2) {
        sum1 += num1;
        num1++;
    }

    sum1 = sum1 / 1000.0;
    std::cout << "arithmetic mean: " << sum1 << "\n" << std::endl;


      //////////
     //4 task//
    //////////
    int a = 0;
    long sum2 = 1;

    int numS = 0;

    std::cout << "Enter a number: ";
    std::cin >> a;

    numS = a;
    if (a >= 1 && a <= 20) {
    while (a <= 20) {
        sum2 *= a;
        a++;
    }
    std::cout << "product of integers from " << numS << " to " << 20 << " is " << sum2 << "\n" << std::endl;
    } else {
        std::cout << "Invalid number!" << std::endl;
    }


      //////////
     //5 task//
    //////////
    int k;
    int f = 1;

    std::cout << "Enter a number: ";
    std::cin >> k;

    while (f <= 10) {
        std::cout << k << '*' << f << "=" << k*f << std::endl;
        f++;
    }
}