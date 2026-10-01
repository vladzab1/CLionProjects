#include <iostream>
#include <iomanip>
#include <ctime>


int main () {
   // const int row = 3;
   // const int col = 4;
   // int numbers[row][col]{};
   // int UserNum;
   //
   // std::cout << "Enter the number: ";
   // std::cin >> UserNum;
   //
   // numbers[0][0] = UserNum;
   // for (int i = 0; i < row; i++) {
   //    for (int j = 0; j < col; j++) {
   //       if (i == 0 && j == 0) {
   //       }
   //       else {
   //          if (j == 0) {
   //             numbers[i][j] =  (numbers[i -1][col-1] * 2);
   //          }
   //          else {
   //             numbers[i][j] = (numbers[i][j-1] * 2);
   //          }
   //       }
   //    }
   // }
   //
   //
   // for (int i = 0; i < row; i++) {
   //    for (int j = 0; j < col; j++) {
   //       std::cout << std::setw(3) << numbers[i][j] << " ";
   //    }
   //    std::cout << std::endl;
   // }


   // const int row = 3;
   // const int col = 4;
   // int numbers[row][col]{};
   // int UserNum;
   //
   // std::cout << "Enter the number: ";
   // std::cin >> UserNum;
   //
   // numbers[0][0] = UserNum;
   // for (int i = 0; i < row; i++) {
   //    for (int j = 0; j < col; j++) {
   //       if (i == 0 && j == 0) {
   //       }
   //       else {
   //          if (j == 0) {
   //             numbers[i][j] =  (numbers[i -1][col-1] + 1);
   //          }
   //          else {
   //             numbers[i][j] = (numbers[i][j-1] + 1);
   //          }
   //       }
   //    }
   // }
   //
   //
   // for (int i = 0; i < row; i++) {
   //    for (int j = 0; j < col; j++) {
   //       std::cout << std::setw(3) << numbers[i][j] << " ";
   //    }
   //    std::cout << std::endl;
   // }
   srand(time(0));


   const int row = 5 ,col = 5;
   int numbers[row][col]{};
   int tmp [row]{};

   int numberOffsets;
   int provisions;

   for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
         numbers[i][j] = rand() % 10;
      }
   }
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
         std::cout << std::setw(2) << numbers[i][j] << " ";
      }
      std::cout << std::endl;
   }
   std::cout << std::endl;



   std::cout << "Select the offset position (0 - top, 1 - right, 2 - bottom, 3 - left): " << std::endl;
   std::cin >> provisions;

   std::cout << "Enter the offset length: " << std::endl;
   std::cin >> numberOffsets;

   if (provisions == 0) {
      for (int i = 0; i < numberOffsets; i++) {
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (i == 0) {
                  tmp[j] = numbers[i][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (i != 0) {
                  numbers[i-1][j] = numbers[i][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (i == row-1) {
                  numbers[i][j] = tmp[j];
               }
            }
         }
      }
   } else if (provisions == 1) {
      for (int i = 0; i < numberOffsets; i++) {
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (j == col-1) {
                  tmp[i] = numbers[i][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = col-1; j >= 0; j--) {
               if (j != 0) {
                  numbers[i][j] = numbers[i][j-1];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (j == 0) {
                  numbers[i][j] = tmp[i];
               }
            }
         }
      }
   } else if (provisions == 2) {
      for (int i = 0; i < numberOffsets; i++) {
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (i == row-1) {
                  tmp[j] = numbers[i][j];
               }
            }
         }
         for (int i = row-1; i >= 0; i--) {
            for (int j = 0; j < col; j++) {
               if (i != 0) {
                  numbers[i][j] = numbers[i-1][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (i == 0) {
                  numbers[i][j] = tmp[j];
               }
            }
         }
      }
   }else if (provisions == 3) {
      for (int i = 0; i < numberOffsets; i++) {
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (j == 0) {
                  tmp[i] = numbers[i][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (j != 0) {
                  numbers[i][j-1] = numbers[i][j];
               }
            }
         }
         for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
               if (j == col-1) {
                  numbers[i][j] = tmp[i];
               }
            }
         }
      }
   }


   for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
            std::cout << std::setw(2) << numbers[i][j] << " ";
      }
         std::cout << std::endl;
      }
      std::cout << std::endl;
   }