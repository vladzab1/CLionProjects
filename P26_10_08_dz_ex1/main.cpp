#include <iostream>
#include <iomanip>

void fill_array(double **arr, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = rand() % 20;
        }
    }
}
void print_array(double **arr, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cout << std::setw(4) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void Add_Col(double **arr, int row, int &col, int ColPos) {

    for (int i = 0; i < row; ++i) {
        int f = 0;
        double *tmp = new double[col+1]{};
        for (int j = 0; j < col; ++j, f++) {
            if (f == ColPos) {
                tmp[f] = 0;
                f++;
            }
            tmp[f] = arr[i][j];
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
    col++;
}
void Remove_First_Col(double **arr, int row, int &col) {
    for (int i = 0; i < row; ++i) {
        double *tmp = new double[col-1];
        for (int j = 1; j < col; ++j) {
            tmp[j-1] = arr[i][j];
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
    col--;
}
void Delete_Col(double **arr, int row, int &col ,int ColPos) {
    for (int i = 0; i < row; ++i) {
        double *tmp = new double[col-1]{};
        for (int j = 0; j < col; ++j) {
            if (j < ColPos) {
                tmp[j] = arr[i][j];
            } else if (j > ColPos) {
                tmp[j-1] = arr[i][j];
            }
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
    col--;
}

int main() {
    int row = 3, col = 4;
    double **arr = new double*[row]{};

    for (int i = 0; i < row; ++i) {
        arr[i] = new double[col];
    }


    fill_array(arr, row, col);
    print_array(arr, row, col);
    Add_Col(arr, row, col, col-1);
    print_array(arr, row, col);
    Delete_Col(arr, row, col, 4);
    print_array(arr, row, col);


    for (int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}