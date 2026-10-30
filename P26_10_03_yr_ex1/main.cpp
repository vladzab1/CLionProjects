#include <cstring>
#include <iostream>
#include <iomanip>

void fill_array(double **arr, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = rand() % 100/10.;
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


int s_len(char str[]) {
    int line = 0;
    for (int i = 0; ; i++) {
        if (str[i] == '\0') {
            return line;
        }
        line++;
    }
    return line;
}

void s_copy(char * dest, char * str) {
    // int i = 0;
    // while (str[i] != 0) {
    //     dest[i] = str[i];
    //     i++;
    // }
    // dest[i] = 0;

    int i = 0;
    do {
        dest[i] = str[i];
        i++;
    } while (dest[i++] != '\0');
}

int main() {
    srand(time(0));

    char buffer[500];
    std::cout << "Enter a text: ";
    std::cin.getline(buffer, 500);
    int len = strlen(buffer);
    char * str = new char[len+1];
    strcpy(str, buffer);

    int i = 0;
    int NumOfLetters = 0;
    int NumOfDigits = 0;
    int NumOfOther = 0;

    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            NumOfDigits++;
        } else if (isalpha(str[i])) {
            NumOfLetters++;
        } else {
            NumOfOther++;
        }
        i++;
    }

    std::cout << "Number of letters: " << NumOfLetters << std::endl;
    std::cout << "Number of digits: " << NumOfDigits << std::endl;
    std::cout << "Number of other: " << NumOfOther << std::endl;
    delete[] str;





    /*
     int strlen(const char * str);
     char * ctrcpy(char * dst, const char * src);
     char * strcat(char * dst, const char * src);
     int strcmp(const char * str1, const char * str2);
     char * strstr(const char * str, const char * sub);
     int atoi(char * str);
     */

    // char buffer[500];
    // std::cout << "Enter a text: ";
    // std::cin.getline(buffer, 500);
    // int len = strlen(buffer);
    // char * str = new char[len+1];
    // strcpy(str, buffer);
    //
    // int i = 0;
    // while (str[i] != '\0') {
    //     if (str[i] == ' ') {
    //         str[i] = '\t';
    //     }
    //     i++;
    // }
    //
    // std::cout << str << std::endl;
    //
    // delete[] str;

    // char buffer[400];
    //
    // std::cout << "Enter the text: ";
    // std::cin.getline(buffer, 400);
    // // int len = s_len(buffer);
    // int len = strlen(buffer);
    // char * str = new char[len+1];
    // // s_copy(str, buffer);
    // strncpy(str, buffer, len);
    // std::cout << str << std::endl;


    // int age;
    // std::cout << "Enter your age: " << std::endl;
    // std::cin >> age;
    // std::cin.ignore();
    //
    // std::cout << age << std::endl;
    //
    // char buffer[400];
    // std::cout << "Enter your name: " << std::endl;
    //
    // // std::cin >> buffer;
    // std::cin.getline(buffer, 400);
    //
    // std::cout << "Hello, " << buffer << std::endl;

    // char arr[] ={'H', 'E','L', 'L', 'O'};
    // char str[] = "Hello";
    //
    // std::cout << arr << std::endl;
    // std::cout << str << std::endl;


    // int row = 3, col = 4;
    // double **arr = new double*[row];
    //
    // for (int i = 0; i < row; ++i) {
    //     arr[i] = new double[col];
    // }
    //
    //
    // fill_array(arr, row, col);
    // print_array(arr, row, col);
    // Remove_First_Col(arr, row, col);
    // print_array(arr, row, col);


    // for (int i = 0; i < row; ++i) {
    //     delete[] arr[i];
    // }
    // delete[] arr;
}