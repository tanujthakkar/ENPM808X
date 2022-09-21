/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 * 
 * @brief ENPM808X, Week 2, Accelerated C++ - 3-5
 
 * @section DESCRIPTION
 * 
 * This program keeps track of grades for several students at once. It prompts 
 * the user to input students names, their three assignment grades, midterm grade,
 * and the finals grade. A weighted average is computed to obtain their final grade.
 */


// Including headers
#include <cstddef>
#include <iostream>
#include <vector>


int main() {
    size_t totalStudents;  // Total number of students
    std::vector<std::string> studentNames;  // Vector to store student names
    std::vector<double> studentGrades;  // Vector to store final student grades

    // Promp user to input the total number of students
    std::cout << "Enter the number of students: ";
    std::cin >> totalStudents;

    // For each student, retrieve and process data
    for (size_t i = 0; i < totalStudents; ++i) {
        std::string studentName;
        double midtermGrade;
        double finalsGrade;
        double studentGrade;

        // Prompt user to input student name
        std::cout << "Enter the name of the student: ";
        std::cin >> studentName;
        studentNames.push_back(studentName);

        // Prompt user to input three assignment grades
        std::cout << "Enter three assignment grades: " << std::endl;
        double assignmentGradeAvg = 0;
        for (size_t j = 0; j < 3; ++j) {
            double assignmentGrade;
            std::cout << (j+1) << ": ";
            std::cin >> assignmentGrade;

            assignmentGradeAvg += assignmentGrade;
        }
        assignmentGradeAvg /= 3;  // Averaging the three assignment grades

        // Prompt user to input midterm grade
        std::cout << "Enter the midterm grade: ";
        std::cin >> midtermGrade;

        // Prompt user to input finals grade
        std::cout << "Enter the finals grade: ";
        std::cin >> finalsGrade;

        studentGrade = (0.3*assignmentGradeAvg) + (0.3*midtermGrade)
                       + (0.4*finalsGrade);  // Calculating the weighted average

        studentGrades.push_back(studentGrade);
    }

    // For each student, print student name and final grade
    std::cout << "\nStudent\tGrade" << std::endl;
    for (size_t i = 0; i < totalStudents; ++i) {
        std::cout << studentNames[i] << "\t" << studentGrades[i] << std::endl;
    }

    return 0;
}
