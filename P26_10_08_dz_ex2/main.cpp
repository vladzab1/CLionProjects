#include <cstring>
#include <iostream>

int main() {
     ///////
    //ex1//
   ///////

    // const int size = 500;
    // char buffer[size];
    //
    // std::cout << "Enter a text: ";
    // std::cin.getline(buffer, size);
    // int NumOfFillElem = (strlen(buffer))+1;
    // int NumOfFreeElem = size-NumOfFillElem;
    //
    // std::cout << "Number of filled elements: " <<NumOfFillElem << std::endl;
    // std::cout <<"Number of free elements: " <<NumOfFreeElem << std::endl;

     ///////
    //ex2//
   ///////

 // int size = 500;
 // char buffer[size];
 // std::cout << "Enter a text 1: ";
 // std::cin.getline(buffer, size);
 // int len = strlen(buffer);
 // char * str = new char[len+1];
 // strcpy(str, buffer);
 //
 // char buffer1[size];
 // std::cout << "Enter a text 2: ";
 // std::cin.getline(buffer1, size);
 // int len1 = strlen(buffer1);
 // char * str1 = new char[len1+1];
 // strcpy(str1, buffer1);
 //
 // if (strcmp(str, str1) == 0) {
 //  std::cout << "The strings are identical" << std::endl;
 // } else {
 //  std::cout << "The strings are different" << std::endl;
 // }
 //
 // delete [] str;
 // delete [] str1;


   ////////
  //exe3//
 ////////

 // int size = 500;
 // char buffer[size];
 // std::cout << "Enter a text: ";
 // std::cin.getline(buffer, size);
 // int len = strlen(buffer);
 // char * str = new char[len+1];
 // strcpy(str, buffer);
 //
 // char buffer1[size];
 // std::cout << "Enter a word: ";
 // std::cin.getline(buffer1, size);
 // int len1 = strlen(buffer1);
 // char * str1 = new char[len1+1];
 // strcpy(str1, buffer1);
 //
 // if (strstr(str, str1)) {
 //  std::cout << " Word "<< "'" << str1 <<"'"<< " be find in the sentence "<< str << std::endl;
 // } else {
 //  std::cout << "Word " << "'" << str1 << "'" << " was not found in the sentence " << str << std::endl;
 // }
 //
 // delete[] str;
 // delete[] str1;

   ////////
  //exe4//
 ////////

 // const int size = 500;
 // char buffer[size];
 // std::cout << "Enter a first name: ";
 // std::cin.getline(buffer, size);
 // int len = strlen(buffer);
 // char * str = new char[len+1];
 // strcpy(str, buffer);
 //
 // char buffer1[size];
 // std::cout << "Enter a last name: ";
 // std::cin.getline(buffer1, size);
 // int len1 = strlen(buffer1);
 // char * str1 = new char[len1+1];
 // strcpy(str1, buffer1);
 //
 // char buffer2[size];
 // std::cout << "Enter a middle name: ";
 // std::cin.getline(buffer2, size);
 // int len2 = strlen(buffer2);
 // char * str2 = new char[len2+1];
 // strcpy(str2, buffer2);
 //
 // int pibLen = len + len1 + len2 + 3;
 // char * pib = new char[pibLen]{};
 // strcat(pib, str);
 // strcat(pib, " ");
 // strcat(pib, str1);
 // strcat(pib, " ");
 // strcat(pib, str2);
 // std::cout << pib;
 //
 // delete[] str;
 // delete[] str1;
 // delete[] str2;
 // delete[] pib;
}

