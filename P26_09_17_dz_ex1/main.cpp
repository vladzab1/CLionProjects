#include <iostream>

  ////////
 //ex1//
//////

int exponentiation(int num, int exp) {
    int tmp = num;
    for (int i = 1; i < exp; i++) {
        num *= tmp;
    }
    tmp = num;
    return num;
}

  ////////
 //ex2//
//////

int sumRange(int start, int end) {
    int rangeSum = 0;
    if (start > end) {
        std::swap(start, end);
    }
    for (int i = start; i <= end; i++) {
           rangeSum += i;
    }
    return rangeSum;
}

  ////////
 //ex3//
//////

void FindPerfectNum(int start, int end) {
    if (start > end) {
        std::swap(start, end);
    }

        for (int i = start; i <= end; i++) {
            if (i > 0) {
                int diviSum = 0;
                for (int j = 1; j < i; j++) {
                    if (i % j == 0) {
                        diviSum += j;
                    }
                }
                if (diviSum == i) {
                    std::cout << "Num: "<< i << " is perfect" << std::endl;
                }
            }
        }
}
  ////////
 //ex4//
//////

// 1 diamonds
// 2 spades
// 3 clubs
// 4 hearts

void displCard(int suit, int rank) {
    if (rank >= 2 && rank <= 14) {
        if (suit == 1) {
             if (rank <= 10) {
                 std::cout << "Diamonds " << rank << std::endl;
             } else {
                 if (rank == 11) {
                     std::cout << "Diamonds Jack" << std::endl;
                 } else if (rank == 12) {
                     std::cout << "Diamonds Queen" << std::endl;
                 } else if (rank == 13) {
                     std::cout << "Diamonds King" << std::endl;
                 } else if (rank == 14) {
                     std::cout << "Diamonds Ace" << std::endl;
                 }
             }
        }
        else if (suit == 2) {
            if (rank <= 10) {
                std::cout << "Spades " << rank << std::endl;
            } else {
                if (rank == 11) {
                    std::cout << "Spades Jack" << std::endl;
                } else if (rank == 12) {
                    std::cout << "Spades Queen" << std::endl;
                } else if (rank == 13) {
                    std::cout << "Spades King" << std::endl;
                } else if (rank == 14) {
                    std::cout << "Spades Ace" << std::endl;
                }
            }
        }
        else if (suit == 3) {
            if (rank <= 10) {
                std::cout << "Clubs " << rank << std::endl;
            } else {
                if (rank == 11) {
                    std::cout << "Clubs Jack" << std::endl;
                } else if (rank == 12) {
                    std::cout << "Clubs Queen" << std::endl;
                } else if (rank == 13) {
                    std::cout << "Clubs King" << std::endl;
                } else if (rank == 14) {
                    std::cout << "Clubs Ace" << std::endl;
                }
            }
        }
        else if (suit == 4) {
            if (rank <= 10) {
                std::cout << "Hearts " << rank << std::endl;
            } else {
                if (rank == 11) {
                    std::cout << "Hearts Jack" << std::endl;
                } else if (rank == 12) {
                    std::cout << "Hearts Queen" << std::endl;
                } else if (rank == 13) {
                    std::cout << "Hearts King" << std::endl;
                } else if (rank == 14) {
                    std::cout << "Hearts Ace" << std::endl;
                }
            }
        }
        else {
            std::cout << "Wrong suit" << std::endl;
        }
    } else {
        std::cout << "Wrong rank" << std::endl;
    }
}

bool numIslucky(int Six_DigitNum) {
    int sumOfLast3Num = 0;
    int sumOfFirst3Num = 0;
    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            int num = Six_DigitNum % 10;
            Six_DigitNum /= 10;
            sumOfLast3Num += num;
        } else {
            int num1 = Six_DigitNum % 10;
            Six_DigitNum /= 10;
            sumOfFirst3Num += num1;
        }
    }
    if (sumOfLast3Num == sumOfFirst3Num) {
        return true;
    } else {
        return false;
    }
}


int main() {

    std::cout << exponentiation(5, 3) << std::endl;

    std::cout << sumRange(0, 5) << std::endl;

    FindPerfectNum(0, 10000);

    displCard(3,2);
    displCard(2,6);
    displCard(1,11);
    displCard(4,14);

    std::cout <<std::boolalpha <<numIslucky(124123) << std::endl;
}