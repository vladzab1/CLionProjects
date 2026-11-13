//
// Created by vladosik on 11/12/26.
//

#include "Student.h"
#include <iostream>
#include <cstring>

Student::Student() {
    name = nullptr;
    age = 0;
    marks = nullptr;
    marksSize = 0;
}

Student::Student(const char *name, int age, int * marks, int marksSize) {
    Student::name = new char[strlen(name)+1]{};
    strcpy(Student::name, name);
    Student::age = age;
    Student::marks = new int [marksSize];
    for (int i = 0; i < marksSize; i++) {
        Student::marks[i] = marks[i];
    }
    Student::marksSize = marksSize;
}

Student::Student(const Student &obj) {
    age = obj.age;
    marksSize = obj.marksSize;
    if (obj.name != nullptr) {
        name = new char[strlen(obj.name)+1]{};
        strcpy(name, obj.name);
    }
    if (obj.marks != nullptr) {
        marks = new int [obj.marksSize];
        for (int i = 0; i < obj.marksSize; i++) {
            marks[i] = obj.marks[i];
        }
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

int Student::getMarks(int index) const {
        return marks[index];
}

void Student::setMarks(int index, int val) {
    marks[index] = val;
}

int Student::getMarksSize() const {
   return marksSize;
}

void Student::print() const {
    std::cout << "Student name: " << name << ", Student age: "<< age <<std::endl;
    std::cout << "Student marks: " << std::endl;
    for (int i = 0; i < marksSize; i++) {
        std::cout << marks[i] << " ";
    }
    std::cout << std::endl;
}

Student::~Student() {
    delete[] name;
    delete[] marks;
}
