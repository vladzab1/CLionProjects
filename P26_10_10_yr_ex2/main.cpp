#include <cstring>
#include <iostream>

struct Point {
    int x;
    int y;
};

void print_point(Point obj) {
    std::cout << "X = "<< obj.x << " Y = " << obj.y << std::endl;
}

void input_point(Point &obj) {
    std::cout << "Enter x: ";
    std::cin >> obj.x;
    std::cout << "Enter y: ";
    std::cin >> obj.y;
}
struct Data {
    int day;
    char month[20];
    int year;
};

void print_Date(Data obj) {
    std::cout<< obj.day << "/" << obj.month << "/" << obj.year << std::endl;
}
void input_Date(Data &obj) {
    std::cout << "Enter day: ";
    std::cin >> obj.day;
    std::cin.ignore();
    std::cout << "Enter month: ";
    std::cin.getline(obj.month , 20);
    std::cout << "Enter year: ";
    std::cin >> obj.year;
    std::cin.ignore();
}

struct Person {
    char first_name[20]{};
    char last_name[20]{};
    Data birthday;
};

void print_Person(Person &obj) {
    std::cout << obj.first_name << "/" << obj.last_name << std::endl;
    std::cout << obj.birthday.day << "/" << obj.birthday.month << "/" <<obj.birthday.year <<std::endl;
}
void input_Person(Person &obj) {
    std::cout << "Enter first name: ";
    std::cin.getline(obj.first_name , 20);
    std::cout << "Enter last name: ";
    std::cin.getline(obj.last_name , 20);
    std::cout << " birthdate " << std::endl;
    input_Date(obj.birthday);
}
int main() {
    Person p("Vasya", "Pupkin", {12, "May", 2000});
    print_Person(p);
    input_Person(p);
    print_Person(p);


    // Data today{};
    // today.day = 10;
    // strcpy (today.month, "October");
    // today.year = 2026;
    // print_Date(today);
    // input_Date(today);
    // print_Date(today);

    // Point a{12,23};
    // std::cout << sizeof(a) << std::endl;
    // print_point(a);
    // input_point(a);
    // print_point(a);
}