#include <cstring>
#include <iostream>
//ex1//////////////////////////////
void delCharByIndex(char *&str, int Index) {
    if (Index >= 0 && Index < strlen(str)) {

    char *ptr = new char[strlen(str)];
    int i = 0;
    int j = 0;
    while (str[i] != 0) {
        if (i != Index) {
            ptr[j] = str[i];
            i++;
            j++;
        } else {
            i++;
        }
    }
    ptr[j] = '\0';
    delete[] str;
    str = ptr;
    }
}


//ex2/////////////////////////////
//перший варіант
void delChar(char *&str, char Char) {
    int i = 0;
    int NumOfChars = 0;
    int size = strlen(str);

    while (str[i] != 0) {
        if (str[i] == Char) {
            NumOfChars++;
        }
        i++;
    }

    char *ptr = new char[size - NumOfChars+1];
    int j = 0;
    for (int d = 0; d < size; ++d) {
        if (str[d] != Char) {
            ptr[j] = str[d];
            j++;
        }
    }
    ptr[size - NumOfChars] = '\0';
    delete[] str;
    str = ptr;
}
//другий варіант
// void delChar(char *&str, char Char) {
//     int i = 0;
//     while (str[i] != 0) {
//         if (str[i] == Char) {
//             delCharByIndex(str, i);
//         } else {
//             i++;
//         }
//     }
// }

//ex3/////////////////////////////
void addCharByIndex(char *&str, int Index, char Char) {
    if (Index >= 0 && Index <= strlen(str)) {
        char *ptr = new char[strlen(str)+2]{};
        strcpy(ptr, str);
        for (int i = strlen(ptr); i > Index; i--) {
            ptr[i] = ptr[i-1];
        }
        ptr[Index] = Char;
        delete[] str;
        str = ptr;
    }
}
//ex4////////////////////////////
void replaceDotsWithExclamation(char *str) {
    int i = 0;
    while (str[i] != 0) {
        if (str[i] == '.') {
            str[i] = '!';
        }
        i++;
    }
}



int main() {
    char * str = new char[7]{};
    strcpy(str, "helllo");
    std::cout << str << std::endl;
    delCharByIndex(str, 3);
    std::cout << str << std::endl;
    // delChar(str, 'l');
    delChar(str, 'l');
    std::cout << str << std::endl;
    addCharByIndex(str, 2, 'l');
    addCharByIndex(str, 2, 'l');
    std::cout << str << std::endl;
    delete[] str;


    char buffer[500];
    std::cout << "Enter a text : ";
    std::cin.getline(buffer, 500);
    int len = strlen(buffer);
    char * str1 = new char[len+1];
    strcpy(str1, buffer);

    std::cout << str1 << std::endl;
    replaceDotsWithExclamation(str1);
    std::cout << str1 << std::endl;

    delete[] str1;
}
