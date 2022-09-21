/**
 * @copyright Copyright (c) 2022
 *
 * @file course.hpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 2, Software Engineering - 3.10

 * @section DESCRIPTION
 *
 * Header file for class Course
 *
 */

#ifndef WEEK_2_SOFTWARE_ENGINEERING_3_10_INCLUDE_COURSE_HPP_
#define WEEK_2_SOFTWARE_ENGINEERING_3_10_INCLUDE_COURSE_HPP_

#include <iostream>
#include <vector>


class Course {
    private:
        std::string name_;  // String to store course name
        int totalStudents_;  // Int to store total students in the course
        std::vector<int> studentNos_;  // Vector to store student numbers
        std::vector<double> studentGrades;  // Vector to store student grades
    
    public:
        Course();  // Default constructor
        ~Course();  // Default destructor
    
        void getStudentGrade(const int& studentNo);
        void updateStudentGrade(const int& studentNo, const double& newGrade);
        double calcCourseAvg();
        void displayCourseSummary();
};

#endif