#include <cstring>
#include <iostream>
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




int main() {
















    // char buf[500];
    // std::cout << "Enter text: ";
    // std::cin.getline(buf, 500);
    // char *str = new char[strlen(buf) + 1];
    // strcpy(str, buf);
    // char *pt = strtok(str, " ");
    // char *words[500];
    //
    // int i = 0;
    // int size = 0;
    // int * WordSize = new int[0];
    // while (pt != nullptr) {
    //     AddNumToArr(WordSize, size, 1);
    //     WordSize[i]= strlen(pt);
    //     words[i] = pt;
    //     i++;
    //     pt = strtok(nullptr, " ");
    //
    // }
    //
    //
    // char **str2 = new char*[i];
    // for (int j = 0; j < i; j++) {
    //     str2[j] = new char[WordSize[j]+1];
    // }
    //
    // for (int j = 0; j < i; j++) {
    //     for (int k = 0; k < WordSize[j]; k++) {
    //         str2[j][k] = words[j][k];
    //     }
    //     str2[j][WordSize[j]] = '\0';
    // }
    //
    //
    // for (int j = 0; j < i; j++) {
    //     std::cout << str2[j] << std::endl;
    // }
    //
    // delete[] str2;
    // delete[] WordSize;
    // delete [] str;

    // char buf[500];
    // std::cout << "Enter text: ";
    // std::cin.getline(buf, 500);
    // char *str = new char[strlen(buf) + 1];
    // strcpy(str, buf);
    //
    // char *pt = strtok(str, " ");
    //
    // while (pt != nullptr) {
    //     std::cout << pt << std::endl;
    //     pt = strtok(nullptr, " ");
    // }
    //
    // delete [] str;
}