//
// Created by vladosik on 11/13/26.
//
#include <iostream>
#include <cstring>
#include "my_string.h"

int main() {
    my_string str("hello");
    std::cout << str.get_string() << std::endl;
    str.write_string();
    str.print_string();
    my_string copy = str;
    copy.print_string();

    std::cout << std::endl;

    my_string str1(50);
    str1.write_string();
    str1.print_string();
    std::cout << strlen(str1.get_string()) << std::endl;
    std::cout << std::endl;

    my_string str2;
    str2.write_string();
    str2.print_string();
}
