//
// Created by vladosik on 11/7/26.
//

#pragma once


class Student {
    char * name;
    int age;

public:
    Student();
    Student(const char* name, int age);
    Student(const Student& obj);
    const char * getName() const;
    int getAge() const;
    void setName(const char* val);
    void setAge(int val);
    void print() const;
    ~Student();
};
