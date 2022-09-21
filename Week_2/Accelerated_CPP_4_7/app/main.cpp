/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 2, Accelerated C++ - 4-7

 * @section DESCRIPTION
 *
 * This program reads an numbers as input and stores them in a vector.
 * It then returns an average of all of the numbers in the vector.
 *
 */

#include <iostream>
#include <numeric>
#include <vector>

/**
 * @brief This function calculates the average of doubles in the vecotr
 *
 * @param v vector containing the double numbers
 *
 * @return double
 */
double calcAverage(const std::vector<double>& v) {
  return (std::accumulate(v.begin(), v.end(), 0.0) / v.size());
}

int main() {
  std::vector<double> numbers;  // Vector to store double numbers
  double number;                // double to store current number being read

  std::cout << "Enter your desired vector input, example: 7 91 3 5. Use Ctrl+D "
               "to end."
            << std::endl;
  while (std::cin >> number) {
    numbers.push_back(number);
  }

  if (!numbers.empty()) {
    std::cout << "\nAverage of the entered number: " << calcAverage(numbers)
              << std::endl;
  } else {
    std::cout << "Invalid input. Please input at least one number."
              << std::endl;
  }

  return 0;
}
