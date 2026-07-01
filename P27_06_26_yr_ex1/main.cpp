#include <iostream>

int main () {
   srand(time(0));
   // const int Size = 10;
   // int arr[Size]{};
   //
   // for (int i = 0; i < Size; i++) {
   //    arr[i] = rand() % 10 - 5;
   // }
   // for (int item : arr) {
   //    std::cout << item <<" ";
   // }
   // std::cout << "\n";
   //
   // for (int i = 0; i <= Size; i++) {
   //    if (arr[i] == 0) {
   //       for (int j = i;j < Size-1; j++) {
   //          arr[j] = arr[j+1];
   //       }
   //       arr[Size-1] = -1;
   //       i--;
   //    }
   // }
   // for (int item : arr) {
   //    std::cout << item <<" ";
   // }
   // const int size = 5;
   // const int size3 = 10;
   //
   // int numbers1[size];
   // int numbers2[size];
   // int numbersAll[size3]{};
   // int ab = 0;
   //
   // for (int i = 0; i <= size; i++) {
   //    numbers1[i] = rand() % 11 -5;
   //    numbers2[i] = rand() % 11 - 5;
   // }
   //
   // for (int i = 0; i <= size; i++) {
   //    std::cout << numbers1[i] << " ";
   // }
   //
   // std::cout << "\n" << std::endl;
   //
   // for (int i = 0; i <= size; i++) {
   //    std::cout << numbers2[i] << " ";
   // }
   //
   // std::cout << "\n" << std::endl;

   // for (int i = 0; i < size; i++) {
   //    if (numbers1[i] > 0) {
   //       numbersAll[ab] = numbers1[i];
   //       ab++;
   //    }
   //    if (numbers2[i] > 0) {
   //       numbersAll[ab] = numbers2[i];
   //       ab++;
   //    }
   //    if (i == size-1) {
   //       for (int j = 0; j < size; j++) {
   //          if (numbers1[j] == 0) {
   //             numbersAll[ab] = numbers1[j];
   //             ab++;
   //          }
   //          if (numbers2[j] == 0) {
   //             numbersAll[ab] = numbers2[j];
   //             ab++;
   //          }
   //          if (j == size-1) {
   //             for (int f = 0; f < size; f++) {
   //                if (numbers1[f] < 0) {
   //                   numbersAll[ab] = numbers1[f];
   //                   ab++;
   //                }
   //                if (numbers2[f] < 0) {
   //                   numbersAll[ab] = numbers2[f];
   //                   ab++;
   //                }
   //                if (f == size-1) {
   //                   for (int e = 0; e < size3;e++) {
   //                      std::cout << numbersAll[e]<<" ";
   //                   }
   //                }
   //             }
   //          }
   //       }
   //    }
   // }

   //
   // int start = 0;
   // int end = size3-1;
   //
   // for (int i = 0; i < size; i++) {
   //    if (numbers1[i]>0) {
   //       numbersAll[start++] = numbers1[i];
   //    }
   //    if (numbers2[i]>0) {
   //       numbersAll[start++] = numbers2[i];
   //    }
   //    if (numbers1[i]<0) {
   //       numbersAll[end--] = numbers1[i];
   //    }
   //    if (numbers2[i]<0) {
   //       numbersAll[end--] = numbers2[i];
   //    }
   // }
   //    for (int e = 0; e < size3;e++) {
   //       std::cout << numbersAll[e]<<" ";
   //    }

   // const int Size = 10;
   // int arr[size];
   //
   // for (int i = 0; i < size; i++) {
   //    int tmp = rand() % 10;
   //    arr[i] = tmp;
   // }
   // for (int item : arr) {
   //    std::cout << item << " ";
   // }
   // std::cout << std::endl;
   // int pos;
   // std::cout << "Enter the pos: ";
   // std::cin >> pos;
   // std::cout << arr[pos] << std::endl;


   // const int size = 5;
   // const int sizeAll = 10;
   //
   // int numbers1[size]{};
   // int numbers2[size]{};
   // int numbersAll[sizeAll]{};
   //
   // for (int i = 0; i< sizeAll; i++) {
   //    numbersAll[i] = rand() % 10;
   // }
   // for (int i = 0; i< sizeAll; i++) {
   //    std::cout << numbersAll[i] << " ";
   // }
   // std::cout << std::endl;
   // for (int i = 0; i< sizeAll/2; i++) {
   //    numbers1[i] = numbersAll[i];
   // }
   // for (int i = sizeAll-1; i > (sizeAll-1)/2; i--) {
   //    numbers2[i-size] = numbersAll[i];
   // }
   //
   // for (int i = 0; i< size; i++) {
   //    std::cout << numbers1[i] << " ";
   // }
   // std::cout << std::endl;
   //
   // for (int i = 0; i< size; i++) {
   //    std::cout << numbers2[i] << " ";
   // }
   const int size = 10;
   int numbers1[size]{};
   int numbers2[size]{};
   int numbersSum[size]{};

   for (int i = 0; i < size; i++) {
      numbers1[i] = rand() % 11;
      numbers2[i] = rand() % 11;
   }

   for (int i = 0; i < size; i++) {
      std::cout << numbers1[i] << " ";
   }
   std::cout << std::endl;
   for (int i = 0; i < size; i++) {
      std::cout << numbers2[i] << " ";
   }

   for (int i = 0; i < size; i++) {
      numbersSum[i] = numbers1[i] + numbers2[i];
   }
   std::cout << std::endl;
   for (int i = 0; i < size; i++) {
      std::cout << numbersSum[i] << " ";
   }
}