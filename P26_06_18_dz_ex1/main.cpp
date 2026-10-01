#include <iostream>

int main () {
      //////////
     //1 task//
    //////////
    int dayFirst = 0;
    int monthFirst = 0;
    int yearFirst = 0;
    int dateInDaysF = 0;
    int leap = 0;

    int daySecond = 0;
    int monthSecond = 0;
    int yearSecond = 0;
    int dateInDaysS = 0;

    int month1 = 31, month2 = 28 ,month3 = 31, month4 = 30, month5 = 31 ,
    month6 = 30, month7 = 31 , month8 = 31 , month9 = 30,
    month10= 31, month11= 30, month12= 31;

    int finalDaysBetween = 0;
    std::cout << "~~~~~~~Program to calculate the number of days between two dates~~~~~~~\n" << std::endl;

    std::cout << "Enter the first date (day month year): " << std::endl;
    std::cin >> dayFirst >> monthFirst >> yearFirst;
    std::cout << "Enter the second date (day month year): " << std::endl;
    std::cin >> daySecond >> monthSecond >> yearSecond;



    if (yearFirst >= 0) {
        leap = ((yearFirst - 1)/4) - ((yearFirst - 1)/100) + ((yearFirst - 1)/400);
        dateInDaysF = leap + ((yearFirst - 1) *365);

        if (monthFirst > 0 && monthFirst <= 12) {
            if (monthFirst > 1 ) {
                dateInDaysF += month1;
            }
            if (monthFirst > 2 ) {
                if ((yearFirst % 400 == 0) || (yearFirst % 4 == 0 && yearFirst % 100 != 0)) {
                    dateInDaysF += (month2 + 1);
                } else {
                    dateInDaysF += month2;
                }
            }
            if (monthFirst > 3 ) {
                dateInDaysF += month3;
            }
            if (monthFirst > 4 ) {
                dateInDaysF += month4;
            }
            if (monthFirst > 5) {
                dateInDaysF += month5;
            }
            if (monthFirst > 6) {
                dateInDaysF += month6;
            }
            if (monthFirst > 7) {
                dateInDaysF += month7;
            }
            if (monthFirst > 8) {
                dateInDaysF += month8;
            }
            if (monthFirst > 9) {
                dateInDaysF += month9;
            }
            if (monthFirst > 10) {
                dateInDaysF += month10;
            }
            if (monthFirst > 11) {
                dateInDaysF += month11;
            }
            if (dayFirst >= 0 && dayFirst <= 31) {
                dateInDaysF += dayFirst;
            } else {
                std::cout << "Incorrect day entered!"<< std::endl;
                return 0;
            }
        } else {
            std::cout << "Incorrect mouth entered!"<< std::endl;
            return 0;
        }
    } else {
        std::cout << "enter a year greater than 0"<< std::endl;
        return 0;
    }

    leap = 0;

    if (yearSecond >= 0) {
        leap = ((yearSecond - 1)/4) - ((yearSecond - 1)/100) + ((yearSecond - 1)/400);
        dateInDaysS = leap + ((yearSecond - 1) * 365);

        if (monthSecond > 0 && monthSecond <= 12) {
            if (monthSecond > 1) {
                dateInDaysS += month1;
            }
            if (monthSecond > 2) {
                if ((yearSecond % 400 == 0) || (yearSecond % 4 == 0 && yearSecond % 100 != 0)) {
                    dateInDaysS += (month2 + 1);
                } else {
                    dateInDaysS += month2;
                }
            }
            if (monthSecond > 3) {
                dateInDaysS += month3;
            }
            if (monthSecond > 4) {
                dateInDaysS += month4;
            }
            if (monthSecond > 5) {
                dateInDaysS += month5;
            }
            if (monthSecond > 6) {
                dateInDaysS += month6;
            }
            if (monthSecond > 7) {
                dateInDaysS += month7;
            }
            if (monthSecond > 8) {
                dateInDaysS += month8;
            }
            if (monthSecond > 9) {
                dateInDaysS += month9;
            }
            if (monthSecond > 10) {
                dateInDaysS += month10;
            }
            if (monthSecond > 11) {
                dateInDaysS += month11;
            }
            if (daySecond >= 0 && daySecond <= 31) {
                dateInDaysS += daySecond;
            } else {
                std::cout << "Incorrect day entered!"<< std::endl;
                return 0;
            }
        } else {
            std::cout << "Incorrect mouth entered!" << std::endl;
            return 0;
        }
    } else {
        std::cout << "enter a year greater than 0"<< std::endl;
        return 0;
    }

    if (dateInDaysF > dateInDaysS) {
        finalDaysBetween = dateInDaysF - dateInDaysS;
    } else {
        finalDaysBetween = dateInDaysS - dateInDaysF;
    }

    std::cout << "Різниця в кількості днів: " << finalDaysBetween<< "\n" << std::endl;


      //////////
     //2 task//
    //////////
    int salary1 = 200;
    int salary2 = 200;
    int salary3 = 200;

    int salesLevel1 = 0;
    int salesLevel2 = 0;
    int salesLevel3 = 0;

    int winnersCount = 0;

    int max = 0;
    std::cout << "Enter the amount the first manager sold for: ";
    std::cin >> salesLevel1;
    std::cout << "Enter the amount the second manager sold for: ";
    std::cin >> salesLevel2;
    std::cout << "Enter the amount the third manager sold for: ";
    std::cin >> salesLevel3 ;
    std::cout << "\n";

    if (salesLevel1 <= 500) {
        salary1 += salesLevel1 * 0.03;
    } else if (salesLevel1 > 500 && salesLevel1 <= 1000) {
        salary1 += salesLevel1 * 0.05;
    } else if (salesLevel1 > 1000 ) {
        salary1 += salesLevel1 * 0.08;
    }

    if (salesLevel2 <= 500) {
        salary2 += salesLevel2 * 0.03;
    } else if (salesLevel2 > 500 && salesLevel2 <= 1000) {
        salary2 += salesLevel2 * 0.05;
    } else if (salesLevel2 > 1000 ) {
        salary2 += salesLevel2 * 0.08;
    }

    if (salesLevel3 <= 500) {
        salary3 += salesLevel3 * 0.03;
    } else if (salesLevel3 > 500 && salesLevel3 <= 1000) {
        salary3 += salesLevel3 * 0.05;
    } else if (salesLevel3 > 1000 ) {
        salary3 += salesLevel3 * 0.08;
    }

    max = salary1;
    if (salary2 > max) {
        max = salary2;
    }

    if (salary3 > max) {
        max = salary3;
    }

    if (salary1 == max) {
        winnersCount++;
    }
    if (salary2 == max) {
        winnersCount++;
    }
    if (salary3 == max) {
        winnersCount++;
    }

    if (salary1 == max && winnersCount == 1) {
        salary1 += 200;
        std::cout << "Manager 1 is the best! He receives a $200 bonus\n" << std::endl;
    }
    if (salary2 == max && winnersCount == 1) {
        salary2 += 200;
        std::cout << "Manager 2 is the best! He receives a $200 bonus\n" << std::endl;
    }
    if (salary3 == max && winnersCount == 1) {
        salary3 += 200;
        std::cout << "Manager 3 is the best! He receives a $200 bonus\n" << std::endl;
    }
    if (winnersCount > 1) {
        std::cout << "No one gets a bonus due to a tie!\n" << std::endl;
    }
    std::cout << "Manager 1's final salary: " << salary1 << std::endl;
    std::cout << "Manager 2's final salary: " << salary2 << std::endl;
    std::cout << "Manager 3's final salary: " << salary3 << std::endl;
}


