#include <iostream>

int main() {
      //////////
     //1 task//
    //////////
    int number = 0;
    int num1, num2, num3, num4, num5, num6;
    int SumFirstNum;
    int SumSecondNum;

    std::cout<< "Enter Enter a six-digit number: ";
    std::cin >> number;.

    if (number >= 100000 && number <= 999999) {
        num6 = number % 10;
        number = number / 10;
        num5 = number % 10;
        number = number / 10;
        num4 = number % 10;
        number = number / 10;
        num3 = number % 10;
        number = number / 10;
        num2 = number % 10;
        number = number / 10;
        num1 = number % 10;

        SumFirstNum = num1 + num2 + num3;
        SumSecondNum = num4 + num5 + num6;

         if (SumFirstNum == SumSecondNum) {
             std::cout<< "Your number is lucky! \n";
         }
         else {
             std::cout<< "Your number is not lucky \n";
         }
    }
    else {
        std::cout<< "You entered the wrong number \n";
    }




      //////////
     //2 task//
    //////////
    int num = 0;
    int number1, number2, number3, number4;
    int SubstFirst;
    int SubstSecond;
    int numInverted = 0;

    std::cout<< "Enter Enter a fouг-digit number: ";
    std::cin >> num;

    if (num >=1000 && num <= 9999) {
        number4 = num % 10;
        num = num / 10;
        number3 = num % 10;
        num = num / 10;
        number2 = num % 10;
        num = num / 10;
        number1 = num % 10;

        SubstFirst = number1;
        number1 = number2;
        number2 = SubstFirst;

        SubstSecond = number3;
        number3 = number4;
        number4 = SubstSecond;

        numInverted = number1 * 1000 + number2 * 100 + number3 * 10 + number4;

        std::cout<< "Inverted four-digit number: " << numInverted << std::endl;
    }
    else {
        std::cout<< "You entered a number that is not four-digit \n";
    }





      //////////
     //3 task//
    //////////
    int numberOne, numberTwo, numberThree;
    int numberFour, numberFive, numberSix, numberSeven;
    int largestNumber = 0;


    std::cout<< "Enter number one: ";
    std::cin >> numberOne;
    std::cout<< "Enter number two: ";
    std::cin >> numberTwo;
    std::cout<< "Enter number three: ";
    std::cin >> numberThree;
    std::cout<< "Enter number four: ";
    std::cin >> numberFour;
    std::cout<< "Enter number five: ";
    std::cin >> numberFive;
    std::cout<< "Enter number six: ";
    std::cin >> numberSix;
    std::cout<< "Enter number seven: ";
    std::cin >> numberSeven;


    largestNumber = numberOne;

    if (numberTwo > largestNumber) {
        largestNumber = numberTwo;
    }
    if (numberThree > largestNumber) {
        largestNumber = numberThree;
    }
    if (numberFour > largestNumber) {
        largestNumber = numberFour;
    }
    if (numberFive > largestNumber) {
        largestNumber = numberFive;
    }
    if (numberSix > largestNumber) {
        largestNumber = numberSix;
    }
    if (numberSeven > largestNumber) {
        largestNumber = numberSeven;
    }

    std::cout<< "Maximum number: " << largestNumber << "\n" << std::endl;





      //////////
     //4 task//
    //////////
    int distanceA_B = 0;
    int distanceB_C = 0;
    int cargo_Weight = 0;

    int fuelCons = 0;
    int fuelA_B = 0;
    int fuelB_C = 0;
    int tank = 300;
    int Refueling = 0;


    std::cout << "Enter the distance between A-B: ";
    std::cin >> distanceA_B;
    std::cout << "Enter the distance between B-C: ";
    std::cin >> distanceB_C;
    std::cout << "Enter the cargo weight (kg): ";
    std::cin >> cargo_Weight;

    if (cargo_Weight <= 500) {
       fuelCons = 1;
    }
    else { if (cargo_Weight <= 1000) {
          fuelCons = 4;
        } else {
            if (cargo_Weight <= 1500) {
                fuelCons = 7;
            } else {
                if (cargo_Weight <= 2000) {
                    fuelCons = 9;
                } else {
                    std::cout<< "The plane does not lift more than 2000 kg" << std::endl;
                    return 0;
                }
            }
        }
    }
    fuelA_B = distanceA_B * fuelCons;
    if (fuelA_B <= 300) {
        tank = tank - fuelA_B;

        fuelB_C = distanceB_C * fuelCons;
        if (fuelB_C <= 300) {
           if (fuelB_C > tank)
           {
            Refueling = fuelB_C - tank;
            std::cout << "Refueling needed: " << Refueling << " liters";
           } else {
            std::cout << "Refrueling not needed";
           }
        }
        else {
            std::cout << "The plane will not have enough fuel to reach point C" << std::endl;
        }
    } else {
        std::cout << "The plane will not have enough fuel to reach point B" << std::endl;
    }
}