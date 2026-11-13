//
// Created by vladosik on 11/7/26.
//

#include "Student.h"
#include <iostream>
#include <cstring>

Student::Student() {
    name = nullptr;
    age = 0;
}

Student::Student(const char *name, int age) {
    Student::name = new char[strlen(name)+1]{};
    strcpy(Student::name, name);
    Student::age = age;
}

Student::Student(const Student &obj) {
    age = obj.age;
    if (obj.name != nullptr) {
        name = new char[strlen(obj.name)+1]{};
        strcpy(name, obj.name);
    }
}

const char * Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

void Student::setName(const char *val) {
    delete[] name;
    name = new char[strlen(val)+1]{};
    strcpy(name, val);
}

void Student::setAge(int val) {
    age = val;
}

void Student::print() const {
    std::cout << "Student name: " << name << ", Student age: "<< age <<std::endl;
}

Student::~Student() {
    delete[] name;
}
