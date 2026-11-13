//
// Created by vladosik on 11/12/26.
//
#include <cstring>
#include <iostream>

class Student {
    char name[30];
    int age;

public:
    Student() {
        age = 0;
        name[0] = '\0';
    }
    Student(const char nameN[], int ageA) {
        if (strlen(nameN) < 30) {
            strcpy(name, nameN);
        } else {
            name[0] = '\0';
        }
        if (ageA > 0) {
            age = ageA;
        } else {
            age = 0;
        }
    }
    const char * getName()  {
       return name;
    }
    int getAge()  {
      return age;
    }
    void setName(const char val[]) {
        if (strlen(val) < 30) {
            strcpy(name, val);
        }
    }
    void setAge(int val) {
        if (val > 0) {
            age = val;
        }
    }
    void print() {
     std::cout <<"Student name: "<< name << ", Student age: " << age <<std::endl;
    }
};


int main () {
    Student student("Dima", 17);
    student.print();
    std::cout << student.getName() << std::endl;
    std::cout << student.getAge() << std::endl;
    student.setName("Roma");
    student.setAge(19);
    student.print();
    Student copy = student;
    copy.print();
}