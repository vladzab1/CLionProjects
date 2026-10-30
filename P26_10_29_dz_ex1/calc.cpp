//
// Created by vladosik on 10/29/26.
//
#include "operations.h"
bool calculate(int num1, int num2, char operation, int &result) {
    if (operation == '+') {
        result =  addition(num1, num2);
        return true;
    }  if (operation == '-') {
        result =  subtraction(num1, num2);
        return true;
    }  if (operation == '*') {
        result =  multiplication(num1, num2);
        return true;
    }  if (operation == '/') {
        if (num2 == 0) {
            return false;
        } else {
            result =  division(num1, num2);
            return true;
        }
    }return false;
}