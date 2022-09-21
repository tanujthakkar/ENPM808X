/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 2, Software Engineering - 3.10

 * @section DESCRIPTION
 *
 * This program uses a custom class Course. The user is prompted to input course
 name
 *
 */

#include <iostream>
#include <vector>

#include "course.hpp"

int main() {
  std::string courseName;
  int totalStudents;

  std::cout << "Enter course name: ";
  std::cin >> courseName;
  std::cout << "Enter total students: ";
  std::cin >> totalStudents;

  Course crs(courseName, totalStudents);

//   std::cout << crs.getStudentGrade(1);
  // crs.updateStudentGrade(1, 4);
  // crs.updateStudentGrade(2, 3.5);
  // crs.updateStudentGrade(3, 2);

  // crs.displayCourseSummary();
  return 0;
}
