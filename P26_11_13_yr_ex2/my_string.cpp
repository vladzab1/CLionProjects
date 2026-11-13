//
// Created by vladosik on 11/13/26.
//
#include <cstring>
#include <iostream>
#include "my_string.h"


my_string::my_string() {
    length = 80;
    string = new char[80]{};
}

my_string::my_string(int len) {
        length = len;
        string = new char[length]{};
}

my_string::my_string(const char * str) {
    length = strlen(str) + 1;
    string = new char[strlen(str) + 1]{};
    strcpy(string, str);
}

my_string::my_string(const my_string &obj) {
    length = obj.length;
    string = new char[strlen(obj.string) + 1]{};
    strcpy(string, obj.string);
}

void my_string::write_string() {
    const int size = 500;
    char tmp[size];

    std::cout << "Enter a text: " << std::endl;
    std::cin.getline(tmp, size);

    delete[] string;
    length = strlen(tmp) + 1;
    string = new char[strlen(tmp) + 1]{};
    strcpy(string, tmp);
}

void my_string::print_string() {
    std::cout << string << std::endl;
}

const char * my_string::get_string() const{
   return string;
}

my_string::~my_string() {
   delete[] string;
}
