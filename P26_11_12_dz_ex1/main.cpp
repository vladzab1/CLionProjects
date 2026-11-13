#include <iostream>
#include "Student.h"



int main () {
   int sizeMarks = 10;
   int * marks = new int [sizeMarks]{4,5,6,1,4,6,7,5,4,3};

   Student student("Dima", 17, marks, sizeMarks);
   student.print();
   std::cout << student.getName() << std::endl;
   std::cout << student.getAge() << std::endl;
   std::cout << student.getMarks(2) << std::endl;
   std::cout << student.getMarksSize() << std::endl;
   student.setName("Roma");
   student.setAge(19);
   student.setMarks(2,10);
   student.setMarks(5,12);
   student.print();
   Student copy = student;
   copy.print();
   delete [] marks;
}