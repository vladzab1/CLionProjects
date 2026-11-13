//
// Created by vladosik on 11/12/26.
//

#pragma once


class Student {
    char * name;
    int age;
    int * marks;
    int marksSize;
public:
    Student();
    Student(const char* name, int age, int * marks, int marksSize);
    Student(const Student& obj);
    const char * getName() const;
    int getAge() const;
    void setName(const char* val);
    void setAge(int val);
    int getMarks(int index) const;
    void setMarks(int index, int val);
    int getMarksSize() const;
    void print() const;
    ~Student();
};
