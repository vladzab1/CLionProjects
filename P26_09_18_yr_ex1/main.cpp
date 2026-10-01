#include  <iostream>
#include <ctime>
void print_array(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;
}
void print_array(int arr[][5],int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout  << arr[i][j];
        }
        std::cout << std::endl;
    }
}
void print_array(int arr[][5][5], int row, int col, int depth) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < depth; k++) {
                std::cout  << arr[i][j][k];
            }
        }
        std::cout << std::endl;
    }
}
void randomFillArray(int mas[],int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % (max - min) + min;
    }
}
void randFill_array(int arr[][5], int row,int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}
void randFill_array(int arr[][5][5], int row, int col, int depth, int min, int max) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < depth; k++) {
                arr[i][j][k] = rand() % 10;
            }
        }
    }
}
int factorial(int num) {
    if (num < 2) {
        return 1;
    }
    return num * factorial(num - 1);
}

void print_arrR(int arr[], int size, int index) {
    if (size == index) {
        return;
    }
    std::cout << arr[index] << " ";
    print_arrR(arr, size, ++index);
}
// ex1
int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
//ex2
int find_max(int arr[][5], int row ,int  col) {
    int max = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
//ex3
int find_max(int arr[][5][5] , int row ,int  col, int depth) {
    int max = arr[0][0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            for (int k = 0; k < depth; k++) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}
//ex4
int find_max(int num1 , int num2) {
    int max = num1;
    if (max < num2) {
        max = num2;
    }
    return max;
}
//ex5
int find_max(int num1 , int num2 , int num3) {
    int max = num1;
    if (max < num2) {
        max = num2;
    } if (max < num3) {
        max = num3;
    }
    return max;
}
int main() {
    srand(time(0));

    //ex1
    const int size = 5;
    int arr[size];
    randomFillArray(arr, size, 0, 10);
    print_array(arr, size);
    std::cout << find_max(arr, size) << std::endl;

    //ex2
    const int row = 5, col = 5, depth = 5;
    int arr1[row][col];
    randFill_array(arr1, row, col);
    print_array(arr1, row, col);
    std::cout << find_max(arr1, row, col) << std::endl;

    //ex3
    int arr2[row][col][depth];
    randFill_array(arr2, row, col, depth, 0 ,10);
    print_array(arr2, row, col, depth);
    std::cout << find_max(arr2, row, col, depth) << std::endl;

    //ex4
    int num1 = rand() % 10, num2 = rand() % 10;
    std::cout <<num1 << " " << num2 << std::endl;
    std::cout << find_max(num1, num2) << std::endl;

    //ex5
    int num3 = rand()% 10, num4 = rand()%10, num5 = rand()%10;
    std::cout <<num3 << " " << num4 <<" "<< num5 << std::endl;
    std::cout << find_max(num3, num4, num5) << std::endl;


    // const int row = 5, col = 4;

    // int arr[row][col]{};
    // randFill_array(arr, row, col);
    // print_array(arr, row, col);
    // std::cout << factorial(3) << std::endl;
    // std::cout << factorial(5) << std::endl;

    // int arr2[row]{};
    // randomFillArray(arr2, row, 0, 10);
    // print_arrR(arr2 , row, 0);
    //
    // std::cout << sum(12, 23) <<std::endl;
}