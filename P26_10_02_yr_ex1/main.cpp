#include <iostream>
#include <iomanip>


void fill_array(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 20;
    }
}
void print_array(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void remove_even_numbers(int *&arr, int &size) {
    int len = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            len++;
        }
    }
    int *tmp = new int[len];
    len = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            tmp[len++] = arr[i];
        }
    }
    delete[] arr;
    arr = tmp;
    size = len;
}

void print_array(int **arr, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout <<std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void fill_array(int **arr, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = rand() % 20;
        }
    }
}
int findSumOddNumbers(int **arr, int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (arr[i][j] % 2 != 0) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}


void push_front_row(int **&arr, int &row, int col) {
    int **tmp = new int*[row+1]{};

    tmp[0] = new int[col]{};

    for (int i = 0; i < row; ++i) {
        tmp[i+1] = arr[i];
    }
    delete[] arr;
    arr = tmp;
    row++;
}
void Del_Row(int **&arr, int &row, int col, int index) {
    int **tmp = new int*[row-1];
    int j = 0;
    for (int i = 0; i < row-1; ++i) {
        if (i == index) {
            delete[] arr[i];
        }
        else {
            tmp[i] = arr[i];
            j++;
        }
    }
    delete[] arr;
    arr = tmp;
    row--;
}

int main() {


    srand(time(0));

    int row = 3, col = 4;
    int **arr = new int*[row];

    for (int i = 0; i < row; ++i) {
        arr[i] = new int[col]{};
    }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    fill_array(arr, row, col);
    print_array(arr, row, col);
    std::cout << findSumOddNumbers(arr, row, col) << std::endl;
    push_front_row(arr, row, col);
    print_array(arr, row, col);
    Del_Row(arr, row, col, 2);
    print_array(arr, row, col);


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    for (int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;


    // int size = 15;
    // int *arr = new int[size]{};
    // fill_array(arr, size);
    // print_array(arr, size);
    // remove_even_numbers(arr, size);
    // print_array(arr, size);
    //
    // delete[] arr;

    // int num = 5;
    // int * pt = &num;
    // int **ptr = &pt;
    //
    // std::cout << **ptr << std::endl;
}
