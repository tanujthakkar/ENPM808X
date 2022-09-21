/**
 * @copyright Copyright (c) 2022
 *
 * @file course.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 2, Software Engineering - 3.10

 * @section DESCRIPTION
 *
 * Source file for class Course. The class supports course grading. It contains
 * an array where students are defined by an number and each student has a
 * course grade. There are methods for updating student grades, obtaining student
 * grade, calculating course grade average, and, displaying all students with their
 * respective grades.
 *
 */

#include "course.hpp"

Course::Course(const std::string& courseName, const int& totalStudents) {
  name_ = courseName;
  totalStudents_ = totalStudents;

  // Assigning incrementing numbers to all students
  for (int i = 0; i < totalStudents_; ++i) {
    studentNos_.push_back(i + 1);
    studentGrades_.push_back(0.0);
  }
}

Course::~Course() {}

double Course::getStudentGrade(const int& studentNo) {
  return studentGrades_[studentNo];
}

void Course::updateStudentGrade(const int& studentNo, const double& newGrade) {
  studentGrades_[studentNo - 1] = newGrade;
}

double Course::calcCourseAvg() {
  return (std::accumulate(studentGrades_.begin(), studentGrades_.end(), 0.0) /
          studentGrades_.size());
}

void Course::displayCourseSummary() {
  std::cout << "\nCourse Name: " << name_
            << "\tTotal Students: " << totalStudents_ << std::endl;
  std::cout << "Student Number\tStudent Grade" << std::endl;
  for (int i = 0; i < totalStudents_; ++i) {
    std::cout << studentNos_[i] << "\t" << studentGrades_[i] << std::endl;
  }
  std::cout << "Course Grade Average: " << calcCourseAvg() << std::endl;
}
