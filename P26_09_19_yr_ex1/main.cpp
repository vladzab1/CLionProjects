#include <iostream>
#include <ctime>

void my_swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

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

int main() {
    srand(time(0));
    // const int size= 5;
    // int arr[size]{};
    //
    // int * ptr = arr;
    // randomFillArray(arr,size,0,10);
    // print_array(arr,size);

    // std::cout <<sizeof(int*)<< std::endl;
    // std::cout <<sizeof(double*)<< std::endl;
    // std::cout <<ptr+arr<< std::endl;
    // for (int i = 0; i < size; i++, ++ptr) {
    //     std::cout << *ptr << " ";
    // }
    // std::cout << std::endl;

    // int a = 5;
    // int *pa  = &a;
    // std::cout<<&a<<std::endl;
    // std::cout<<pa<<std::endl;

    // int a = 3, b =5;
    // std::cout<<a<<" "<<b<<std::endl;
    // int tmp = a;
    // a = b;
    // b = tmp;
    // std::cout<<a<<" "<<b<<std::endl;
    // int a = 3, b =5;
    // std::cout << a << b <<std::endl;
    // my_swap(&a, &b);int a , b ;
    //    int *ap = &a;
    //    int *bp = &b;
    //    std::cout << "Enter the number a: ";
    //    std::cin >> *ap;
    //    std::cout << "Enter the number b: ";
    //    std::cin >> *bp;
    //    int max = *ap;
    //    if (*bp > max) {
    //       max = *bp;
    //    }
    //    std::cout << "The maximum number is: " << max << std::endl;
    // std::cout << a << b <<std::endl;

    // int a, b;
    // int *ap = &a;
    // int *bp = &b;
    // std::cout << "Enter the number a: ";
    // std::cin >> *ap;
    // std::cout << "Enter the number b: ";
    // std::cin >> *bp;
    //
    // int * max = ap;
    // if (*bp > *max) {
    //     max = bp;
    // }
    // std::cout << "The maximum number is: " << *max << std::endl;


    // int num;
    // int * nump = &num;
    //
    // std::cout << "Enter num a:  ";
    // std::cin >> *nump;
    //
    // if (*nump > 0) {
    //     std::cout << "This number is positive" << std::endl;
    // } else if (*nump == 0) {
    //     std::cout << "This number is zero" << std::endl;
    // } else {    int num1 , num2;
    //    int *num1p = &num1, *num2p = &num2;
    //
    //    std::cout << "Enter first number: ";
    //    std::cin >> *num1p;
    //    std::cout << "Enter second number: ";
    //    std::cin >> *num2p;
    //    std::cout << std::endl;
    //    std::cout << *num1p << " " << *num2p << std::endl;
    //    int tmp;
    //
    //    int *ptmp = num1p;
    //    num1p = num2p;
    //    num2p = ptmp;
    //
    //    std::cout << *num1p << " " << *num2p << std::endl;
    //     std::cout << "This number is negative" << std::endl;
    // }

    // int num1, num2;
    // int *num1p = &num1, *num2p = &num2;
    //
    // std::cout << "Enter first number: ";
    // std::cin >> *num1p;
    // std::cout << "Enter second number: ";
    // std::cin >> *num2p;
    // std::cout << std::endl;
    //
    // std::cout << *num1p << " " << *num2p << std::endl;
    // int tmp;
    // int *ptmp = &tmp;
    //
    // *ptmp = *num1p;
    // *num1p = *num2p;
    // *num2p = *ptmp;
    //
    // std::cout << *num1p << " " << *num2p << std::endl;

    int num1 = 0, num2 = 0;
    char operation;
    int result;
    bool is_valid = true;
    int *num1P = &num1, *num2P = &num2;
    char *operationP = &operation;
    int *resultP = &result;
    bool *isvalidP = &is_valid;

    std::cout << "Enter number 1: ";
    std::cin >> *num1P;
    std::cout << "Enter number 2: ";
    std::cin >> *num2P;
    std::cout << std::endl;

    std::cout << "Choose action( + , - , * , / )";
    std::cin >> *operationP;
    std::cout << std::endl;

    if (*operationP == '+') {
        *resultP = *num1P + *num2P;
    } else if (*operationP == '-') {
        *resultP = *num1P - *num2P;
    } else if (*operationP == '*') {
        *resultP = *num1P * *num2P;
    } else if (*operationP == '/') {
        if (*num2P == 0) {
            std::cout << "You cannot divide by zero" << std::endl;
            *isvalidP = false;
        } else {
            *resultP = *num1P / *num2P;
        }
    } else {
        std::cout << "wrong action" << std::endl;
        *isvalidP = false;
    }
    if (*isvalidP) {
        std::cout << *num1P <<" "<<*operationP <<" "<<*num2P << " = " << *resultP << std::endl;
    }
}