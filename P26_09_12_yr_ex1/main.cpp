#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>

double prod(double a, double b) {
   return a * b;
}
int number;

int add(int num) {
 return ++num;
}


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

int sumOfArrNum(int mas[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += mas[i];
    }
    return sum;
}

void findMinMax(int mas[], int size) {
    int indexMin = 0, indexMax = 0;

    for (int i = 1; i < size; i++) {
        if (mas[i] > mas[indexMax]) {
            indexMax = i;
        } if (mas[i] < mas[indexMin]) {
            indexMin = i;
        }
    }
    std::cout << " Min number:" << mas[indexMin] <<" With index "<< indexMin << " Max number: " << mas[indexMax] <<" with index "<<indexMax << std::endl;
}

void turnOver(int arr[], int size) {
    for (int i = 0 ; i < size/2; i++) {
        int tmp = arr[i];
        arr[i] = arr[size-1-i];
         arr[size-1-i] = tmp;
    }
}

int NumOfPrimeNum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 2) {
            bool isPrime = true;
            for (int j = 2; j < arr[i]; j++) {
                if (arr[i] % j == 0) {
                    isPrime = false;
                }
            }
            if (isPrime) {
                result++;
            }
        }
    }
    return result;
}
int main () {
    srand(time(0));

    const int size = 5;
    int arr[size];
    randomFillArray(arr,size,0,size);
    printArr(arr,size);
    std::cout << "Number of prime numbers in array: " << NumOfPrimeNum(arr,size)<< std::endl;


    // turnOver(arr,size);
    // std::cout << sumOfArrNum(arr,size) << std::endl;
    // const int size = 10;
    // int arr[size]{};
    // printArr(arr, size);

    // const int size = 5;
    // int arr[size]{};
    // printArr(arr, size);
    //
    // randomFillArray(arr,size,0,50);
    // printArr(arr,size);

    // std::cout << number << std::endl;
    // std::cout <<prod(12,23)<<std::endl;

    // int num = 0;
    // num = add(num);
    // std::cout << num << std::endl;



}