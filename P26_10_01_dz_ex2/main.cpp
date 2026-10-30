#include <iostream>
#include <print>

int *MakeArr(int size) {
    int *arr = new int[size];
    return arr;
}
void FillArr(int *&arr, int size, int max, int min) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % (max - min) + min;
    }
}
void PrintArr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}
void DeleteArr(int *&arr) {
     delete[] arr;
}
void AddNumToArr(int *&arr,int &size, int num) {
    int *arrTmp = new int[size+1];
    for (int i = 0; i < size; ++i) {
        arrTmp[i] = arr[i];
    }

    arrTmp[size] = num;
    delete[] arr;
    arr = arrTmp;
    size++;
}
void AddNumToArrByIndex(int *&arr,int &size, int index, int num) {
    if (0 <= index && index <= size) {
        int *arrTmp = new int[size+1];
        for (int i = 0; i < size; ++i) {
            arrTmp[i] = arr[i];
        }
        for (int i = size; i > index; --i) {
            arrTmp[i] = arrTmp[i-1];
        }
        arrTmp[index] = num;
        delete[] arr;
        arr = arrTmp;
        size++;
    }
}
void DeleteNumToArrByIndex(int *&arr,int &size, int index) {
    if (size > 0 && index >= 0 && index < size) {
        int *arrTmp = new int[size - 1];
        int j = 0;
        for (int i = 0; i < size; ++i) {
            if (i != index) {
                arrTmp[j] = arr[i];
                j++;
            }
        }
        delete[] arr;
        arr = arrTmp;
        size--;
    }
}

int *DelPrimeNum(int *arr, int size, int &NewSize) {
    int size2 = 0;
    for (int i = 0; i < size; ++i) {
        bool prime = true;
        if (arr[i] < 2) {
            prime = false;
        }
        for (int j = 2; j < arr[i]; ++j) {
            if (arr[i] % j == 0) {
                prime = false;
                break;
            }
        }
        if (!prime) {
            size2++;
        }
    }
    int *arrP = new int[size2];
    int k = 0;
    for (int i = 0; i < size; ++i) {
        bool prime = true;
        if (arr[i] < 2) {
            prime = false;
        }
        for (int j = 2; j < arr[i]; ++j) {
            if (arr[i] % j == 0) {
                prime = false;
                break;
            }
        }
        if (!prime) {
            arrP[k] = arr[i];
            k++;
        }
    }
    NewSize = size2;
    return arrP;
}
void SeparateElements(int *arr, int size, int *arrPos, int &sizePos, int *arrNegat,int &sizeNegat, int *arrZero, int &sizeZero) {
    sizePos = 0;
    sizeNegat = 0;
    sizeZero = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            arrPos[sizePos] = arr[i];
            sizePos++;
        } else if (arr[i] < 0) {
            arrNegat[sizeNegat] = arr[i];
            sizeNegat++;
        } else if (arr[i] == 0) {
            arrZero[sizeZero] = arr[i];
            sizeZero++;
        }
    }
}
int main() {
    int size = 0;
    std::cout << "Please enter the size of the array: ";
    std::cin >> size;
    std::cout << std::endl;

    srand(time(0));
    int *arrP = MakeArr(size);

    std::cout << arrP << std::endl;
    FillArr(arrP, size, 10, 0);
    PrintArr(arrP, size);
    std::cout << std::endl;
    AddNumToArr(arrP, size, 10);
    PrintArr(arrP, size);
    std::cout << std::endl;
    AddNumToArrByIndex(arrP, size, 3, 11);
    PrintArr(arrP, size);
    std::cout << std::endl;
    DeleteNumToArrByIndex(arrP, size, 2);
    PrintArr(arrP, size);
    std::cout << std::endl;
    int newSize = 0;
    int *arrP2 = DelPrimeNum(arrP, size, newSize);

    delete[] arrP;
    arrP = arrP2;
    size = newSize;

    PrintArr(arrP, size);
    std::cout << std::endl;

    DeleteArr(arrP);


    int arr1[10]{1, -2, 0, 4, -5, 0, 7, -8, 9, 0};
    int size1 = 10;


    int *arrPos = MakeArr(size1);
    int *arrNeg = MakeArr(size1);
    int *arrZero = MakeArr(size1);
    int sizePos = 0;
    int sizeNeg = 0;
    int sizeZero = 0;

    SeparateElements(arr1, size1, arrPos, sizePos, arrNeg, sizeNeg, arrZero, sizeZero);

    PrintArr(arrPos, sizePos);
    std::cout << std::endl;
    PrintArr(arrNeg, sizeNeg);
    std::cout << std::endl;
    PrintArr(arrZero, sizeZero);

    DeleteArr(arrPos);
    DeleteArr(arrNeg);
    DeleteArr(arrZero);
}