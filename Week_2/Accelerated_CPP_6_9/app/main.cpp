/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 2, Accelerated C++ - 6-9

 * @section DESCRIPTION
 *
 * This program reads an input stream and stores it as strings in a vector.
 * A concatenation of all the strings is returned.
 *
 */

#include <iostream>
#include <istream>
#include <numeric>
#include <string>
#include <vector>

/**
 * @brief This function reads the input stream and stores to a vector
 *
 * @param in standard input stream
 * @param v vector to store the input stream
 */
void readInputStream(std::istream& in, std::vector<std::string>& v) {
  std::string str;  // Local variable to store current string
  // Store each string to a vector
  while (in >> str) {
    v.push_back(str);
  }
}

/**
 * @brief This functions returns a concatenation of strings in input vector.
 *
 * @param v vector of strings
 *
 * @return std::string
 */
std::string concatVector(const std::vector<std::string>& v) {
  return std::accumulate(v.begin(), v.end(), std::string(""));
}

int main() {
  std::vector<std::string> strs;  // Vector to store strings from input stream

  // Prompt the user to enter input stream
  std::cout << "Enter your desired string input, use Ctrl+D to end"
            << std::endl;
  readInputStream(std::cin, strs);

  if (!strs.empty()) {
    std::cout << "\nConcatednated stream: " << concatVector(strs) << std::endl;
  } else {
    std::cout << "Invalid input. Please input at least one word." << std::endl;
  }

  return 0;
}
