#include <iostream>
#include <ctime>
#include <iomanip>

int main () {
    srand(time(0));
    // const int SIZE = 5;
    // int arr[SIZE]{};
    //
    // int dispLength;
    // std::cout << "Enter the offset length: " <<std::endl;
    // std::cin >> dispLength;
    // std::cout << std::endl;
    //
    // std::cout << "Original" << std::endl;
    // for (int i = 0; i < SIZE; i++) {
    //     arr[i] = rand() % 10;
    // }
    // for (int item: arr) {
    //     std::cout << item << " ";
    // }
    //
    // std::cout << std::endl;
    //
    //
    // for (int i = 0; i < dispLength; i++) {
    //     int tmp = arr[0];
    //     for (int i = 1; i < SIZE; i++) {
    //         arr[i-1] = arr[i];
    //     }
    //     arr[SIZE-1] = tmp;
    // }
    //
    // std::cout << "Shifted" << std::endl;
    // for (int item: arr) {
    //     std::cout << item << " ";
    // }
    // std::cout << std::endl;

    // const int ROW = 3, COL=4;
    //
    // int arr[ROW][COL]{};
    // int negativeNumbers = 0;
    //
    // for (int i=0; i< ROW; i++) {
    //     for (int j=0; j<COL; j++) {
    //         std::cout<<std::setw(3) << arr[i][j];
    //     }
    //     std::cout << std::endl;
    // }
    //
    // std::cout << std::endl;
    //
    //
    // for (int i=0; i< ROW; i++) {
    //     for (int j=0; j<COL; j++) {
    //         arr[i][j] = rand() % 20-10;
    //     }
    // }
    //
    // for (int i=0; i< ROW; i++) {
    //     for (int j=0; j<COL; j++) {
    //         std::cout<<std::setw(3) << arr[i][j];
    //     }
    //     std::cout << std::endl;
    // }
    //
    // std::cout << std::endl;
    //
    // for (int i=0; i< ROW; i++) {
    //     for (int j=0; j<COL; j++) {
    //         if (arr[i][j] < 0) {
    //             negativeNumbers++;
    //         }
    //     }
    // }
    // std::cout << std::endl;
    //
    // std::cout <<"number of negative numbers: " << negativeNumbers << std::endl;


    // const int row = 5, col = 5;
    // int arr[row][col];
    // int sumOfNumbers = 0;
    // double arithmeticMean = 0;
    // int minNum = 0;
    // int maxNum = 0;
    //
    // for (int i = 0; i < row; i++) {
    //     for (int j = 0; j < col; j++) {
    //         arr[i][j] = rand() % 20;
    //     }
    // }
    //
    // for (int i=0; i< row; i++) {
    //     for (int j=0; j < col ; j++) {
    //         std::cout<<std::setw(3) << arr[i][j];
    //     }
    //     std::cout << std::endl;
    // }
    //
    // std::cout << std::endl;
    //
    // for (int i=0; i< row; i++) {
    //     for (int j=0; j < col; j++) {
    //         sumOfNumbers += arr[i][j];
    //     }
    // }
    //
    // arithmeticMean = (sumOfNumbers * 1.0) / (col*row);
    //
    // minNum = arr[0][0];
    // for (int i=0; i< row; i++) {
    //     for (int j=0; j < col; j++) {
    //         if (arr [i][j] < minNum) {
    //             minNum = arr [i][j];
    //         }
    //     }
    // }
    //
    // maxNum = arr[0][0];
    // for (int i=0; i< row; i++) {
    //     for (int j=0; j < col; j++) {
    //         if (arr [i][j] > maxNum) {
    //             maxNum = arr [i][j];
    //         }
    //     }
    // }
    //
    // std::cout << "The sum of all numbers: " << sumOfNumbers << std::endl;
    // std::cout << "The arithmetic mean of all the numbers: " << arithmeticMean << std::endl;
    // std::cout << "The minimum of all numbers: " << minNum << std::endl;
    // std::cout << "The maximum of all numbers: " << maxNum << std::endl;


    const int row =3, col = 4;
    int numbers[row][col];
    int result[row+1][col+1]{};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            numbers[i][j] = rand() % 20;
        }
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << numbers[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][col] += numbers[i][j];
        }
    }

}