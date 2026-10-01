#include <iostream>
#include <ctime>

void printArr(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;
}

void randomFillArray(int mas[],int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % (max - min) + min;
    }
}
  ////////
 //ex1//
//////

int foundNumInArrayL(int arr[], int size, int num) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            index = i;
            return index;
        }
    }
    return -1;
}

  ////////
 //ex2//
//////
int foundNumInArrayB(int arr[], int size, int num) {
    int index = 0;
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == num ) {
            index = mid;
            return index;
        } else if (arr[mid] > num) {
            right = mid-1;
        } else if (arr[mid] < num) {
            left = mid+1;
        }
    }
    return -1;
}

  ////////
 //ex3//
//////

int ConBinaryToDecimal(int BinNum) {
    int num = 0;
    int num1 = 1;

    for (int i = 0;BinNum != 0; i++) {
        int tmp = BinNum % 10;
        BinNum = BinNum / 10;
        num += tmp * num1;
        num1 *= 2;
    }
    return num;
}
int main() {
    srand(time(0));
    const int size = 10;
    int arr1[size]{1,3,4,7,8,9,11, 14, 16,17};
    int arr[size];
    randomFillArray(arr, size, 0, 10);
    printArr(arr, size);
    std::cout << foundNumInArrayL(arr, size, 4) << std::endl;
    printArr(arr1, size);
    std::cout << foundNumInArrayB(arr1, size, 4) << std::endl;
    std::cout << ConBinaryToDecimal(101010) << std::endl;
}
