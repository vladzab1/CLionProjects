#include <cstring>
#include <iostream>

int main() {
    // const int size = 500;
    // char buf[size]{};
    // std::cout << "Enter text: " << std::endl;
    // std::cin.getline(buf, size);
    // int len = strlen(buf);
    // char *str1 = new char[len +1];
    // strcpy(str1, buf);
    //
    // char *spaceIndex = strstr(str1, " ");
    //
    // int spaceNum = spaceIndex - str1;
    // char *str2 = new char[spaceNum + 1];
    // strncpy(str2, str1 , spaceNum);
    // str2[spaceNum] = '\0';
    //
    // int spaceNum2 = (str1 + len) - (spaceIndex+1);
    // char *str3 = new char[spaceNum2 + 1];
    // strncpy(str3, str1+spaceNum+1, spaceNum2);
    // str3[spaceNum2] = '\0';
    //
    // char *str4 = new char[spaceNum + spaceNum2+2];
    // strcpy(str4, str3);
    // strcat(str4, " ");
    // strcat(str4, str2);
    //
    // std::cout << str4 << std::endl;
    //
    // delete [] str4;
    // delete [] str3;
    // delete [] str2;
    // delete [] str1;

    // const int size = 500;
    // char buf[size];{};
    // std::cout << "Enter text: " << std::endl;
    // std::cin.getline(buf, size);
    // int len = strlen(buf);
    // char *str1 = new char[len +1];
    // strcpy(str1, buf);
    //
    // char * strFinal = new char[len+1];
    // if (len % 2 == 0) {
    //     char * str2 = new char[(len/2) + 1];
    //     char * str3 = new char[(len/2) + 1];
    //     strncpy(str2, str1, len / 2);
    //     str2[len / 2] = '\0';
    //     strncpy(str3, str1 + len/ 2, len / 2);
    //     str3[len / 2] = '\0';
    //     strcpy(strFinal, str3);
    //     strcat(strFinal, str2);
    //     delete [] str2;
    //     delete [] str3;
    // } else {
    //     char * str2 = new char[(len/2) + 2];
    //     char * str3 = new char[(len/2) + 1];
    //     strncpy(str2, str1, (len / 2) + 1);
    //     str2[(len / 2) +1] = '\0';
    //     strncpy(str3, str1 + (len/ 2) +1, len / 2);
    //     str3[len / 2] = '\0';
    //     strcpy(strFinal, str3);
    //     strcat(strFinal, str2);
    //     delete [] str2;
    //     delete [] str3;
    // }
    //
    // std::cout << strFinal << std::endl;
    // delete [] strFinal;
    // delete [] str1;


  // char buf[500]{};
  // std::cout << "Enter the first line: " << std::endl;
  // std::cin.getline(buf, 500);
  // char *str1 = new char[strlen(buf) + 1];
  // strcpy(str1, buf);
  // std::cout << "Enter the first line: " << std::endl;
  // std::cin.getline(buf, 500);
  // char * str2 = new char[strlen(buf) + 1];
  // strcpy(str2, buf);
  //
  //
  // char * str3 = new char[strlen(str1) + strlen(str2) + 1];
  //
  // strcpy(str3, str1);
  // strcat(str3, str2);
  //
  // std::cout << str3 << std::endl;
  //
  // delete [] str1;
  // delete [] str2;
  // delete [] str3;
}