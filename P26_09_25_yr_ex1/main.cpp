#include <iostream>


void fill_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}
int main() {
    srand(time(0));

    int size1 = 0;
    int size2 = 0;
    int size3 = 0;

    std::cout << "Enter size of array 1: ";
    std::cin >> size1;
    std::cout << "Enter size of array 2: ";
    std::cin >> size2;

    int *arr1 = new int[size1];
    int *arr2 = new int[size2];


    fill_array(arr1, size1);
    fill_array(arr2, size2);
    print_array(arr1, size1);
    std::cout << std::endl;
    print_array(arr2, size2);
    std::cout << std::endl;

    int *arr3 = new int[size1]{};
    for (int i = 0; i < size1; i++) {arr3[i] = -1;}

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[i] = arr1[i];
                break;
            }
        }
    }
    for (int i = 0; i < size1; i++) {
        if (arr3[i] != -1) {
            size3++;
        }
    }

    int *arr4 = new int[size3];
    int d = 0;
    for (int i = 0; i < size1; i++) {
        if (arr3[i] != -1) {
            arr4[d] = arr3[i];
            d++;
        }
    }


    print_array(arr4, size3);

    delete [] arr1;
    delete [] arr2;
    delete [] arr3;




    //
    // int size1 = 0;
    // int size2 = 0;
    //
    // std::cout << "Enter size of array 1: ";
    // std::cin >> size1;
    // std::cout << "Enter size of array 2: ";
    // std::cin >> size2;
    //
    // int *arr1 = new int[size1];
    // int *arr2 = new int[size2];
    //
    //
    // fill_array(arr1, size1);
    // fill_array(arr2, size2);
    // print_array(arr1, size1);
    // std::cout << std::endl;
    // print_array(arr2, size2);
    // std::cout << std::endl;
    //
    // int *arr3 = new int[size1+size2];
    //
    // for (int i = 0; i < size1; i++) {
    //     arr3[i] = arr1[i];
    // }
    // for (int i = 0; i < size2; i++) {
    //     arr3[i+size1] = arr2[i];
    // }
    //
    // print_array(arr3, size1+size2);
    //
    // delete [] arr1;
    // delete [] arr2;
    // delete [] arr3;




    // int size = 0;
    //
    // std::cout << "Enter size of array: ";
    // std::cin >> size;
    // int *arr = new int[size]{};
    // fill_array(arr, size);
    // print_array(arr, size);
    //
    // delete [] arr;

    // double num = 34.1;
    // double *ptr = &num;
    //
    // *ptr = 12.2;
    // std::cout << num << std::endl;
    //
    // double arr[]{1,2,3,4,5,6};
    // ptr = &arr[0];

    // int * ptr = new int(5);
    // std::cout << *ptr << std::endl;
    // delete ptr;
    // delete ptr;
    //
    // int arro[300000]{};
    // for (int i = 0; i < 300000; i++) {
    //     std::cout << arro[i] << std::endl;
    // }\
    int size  = 3000000;
    // int *arr = new int[size]{};
    // for (int i = 0; i < size; i++) {
    //     std::cout << arr[i] << " ";
    // }
    //
    // delete[] arr;

    // int * arr;
    // for (; ;) {
    //    arr = new int[10000];
    //
}