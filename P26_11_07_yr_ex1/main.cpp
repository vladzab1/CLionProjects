#include <iostream>
// #include "Product.h"
#include "Student.h"

// int counter() {
//    static int n = 0;
//    return n++;
// }

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







   // Product test("Test", 37.85);
   // test.print();
   // test.setName("Milk");
   // test.print();
   // Product copy = test;
   // copy.print();

   // std::cout << counter() << std::endl;
   // std::cout << counter() << std::endl;
   // std::cout << counter() << std::endl;
   // std::cout << counter() << std::endl;
   // std::cout << counter() << std::endl;
   // std::cout << counter() << std::endl;

   // std::cout << p.getCounter() << std::endl;
   // Product p1("Bread1", 37.86);
   // p1.print();
   // std::cout << p1.getCounter() << std::endl;
   // Product p2("Bread2", 37.87);
   // p2.print();
   // std::cout << p2.getCounter() << std::endl;

}