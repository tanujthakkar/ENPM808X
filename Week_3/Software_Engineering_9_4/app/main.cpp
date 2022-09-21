/**
 * @copyright Copyright (c) 2022
 *
 * @file course.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 *
 * @brief ENPM808X, Week 3, Software Engineering - 9.4

 * @section DESCRIPTION
 *
 * This program contains a function that returns the position of the beginning
 * of a given string in a given text.
 *
 */

#include <iostream>
#include <vector>

/**
 *   @brief  Returns the position of string in reference string
 *
 *   @param  refString is the reference string
 *   @param  stringToSearch string to be searched
 *
 *   @return size_t
 */
size_t getPositionInText(const std::string& refString,
                         const std::string& stringToSearch) {
  std::size_t found = refString.find(stringToSearch);
  return found;
}

/**
 *   @brief  Prints the position of string in the given text
 *
 *   @param  refString reference string
 *   @param  stringToSearch string to be searched
 *
 *   @return void
 */
void printPosition(const std::string& refString,
                   const std::string& stringToSearch) {
  size_t position =
      getPositionInText(refString, stringToSearch);  // Function call

  if (position != std::string::npos) {
    std::cout << "Found the string \"" << stringToSearch << "\" in \""
              << refString << "\" at: " << position << std::endl;
  } else {
    std::cout << "String does not exist in reference." << std::endl;
  }
}

int main() {
  std::string refString =
      "This is a test for ENPM808X";  // Reference string to parse
  std::string stringToSearch =
      "ENPM808X";  // string to search in reference string

  printPosition(refString, stringToSearch);  // Function call to print position

  return 0;
}
