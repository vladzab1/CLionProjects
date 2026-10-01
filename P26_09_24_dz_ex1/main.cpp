#include <iostream>
#include <ctime>

void print_array(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;
}

void randomFillArray(int mas[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % (max - min) + min;
    }
}

int find_Min(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
int Find_FirstMax(int arr[], int size) {
    int max = arr[0];
    int posMax = 0;
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            posMax = i;
        }

    }
    return posMax;
}
int Find_LastMax(int arr[], int size) {
    int max = arr[size-1];
    int posMax = size-1;
    for (int i = size-1; i >= 0; i--) {
        if (max < arr[i]) {
            max = arr[i];
            posMax = i;
        }

    }
    return posMax;
}

int find_prodOddNum(int arr[], int size) {
    int prodOddNum = 1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            prodOddNum *= arr[i];
        }
    }
    return prodOddNum;
}

int Find_SumEvenPos(int arr[], int size) {
    int SumEven = 0;
    for (int i = 0; i < size; i+=2) {
        SumEven += arr[i];
    }
    return SumEven;
}

int main() {
    srand(time(0));

    const int size = 5;
    int arr[size] {};

    randomFillArray(arr, size, 0, 10);
    print_array(arr, size);
    std::cout << find_Min(arr, size) << std::endl;
    std::cout << Find_FirstMax(arr, size) << std::endl;
    std::cout << Find_LastMax(arr, size) << std::endl;
    std::cout << find_prodOddNum(arr, size) << std::endl;
    std::cout << Find_SumEvenPos(arr, size) << std::endl;
}