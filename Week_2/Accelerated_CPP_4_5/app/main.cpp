/**
 * @copyright Copyright (c) 2022
 *
 * @file main.cpp
 * @author Tanuj Thakkar (tanuj@umd.edu)
 * @version 0.1
 * @date 2022-09-21
 * 
 * @brief ENPM808X, Week 2, Accelerated C++ - 4-5
 
 * @section DESCRIPTION
 * 
 * This program reads an input stream and counts the repetitions for each word
 * in the recorded stream, as well as the total number of words in the input 
 * stream.
 */

#include <iostream>
#include <istream>
#include <ostream>
#include <vector>
#include <unordered_map>


/**
 * @brief Reads input stream and stores words to a vector. It uses an unordered_map
 *        to simulataneously store the frequency of each word. 
 * 
 * @param in is the input stream
 * @param words is the vector to store each string (word)
 * @param frequencyCounts is an unordered_map to store the frequency of each word
 * 
 * @return void
 */
void processInputStream(std::istream& in, std::vector<std::string>& words,
                        std::unordered_map<std::string, int>& frequencyCounts) {
    std::string word;
    while (in >> word) {
        words.push_back(word);
        frequencyCounts[word]++;
    }
}

int main() {
    std::vector<std::string> words;  // Vector to store words from input stream
    std::unordered_map<std::string, int> frequencyCounts;

    // Prompt the user to enter input stream
    std::cout << "Enter your desired text input, use Ctrl+D to end"
              << std::endl;
    processInputStream(std::cin, words, frequencyCounts);

    int totalWordCount = 0;  // Int to store total word count
    // Printing all the words with their frequency
    for (auto itr : frequencyCounts) {
        std::cout << itr.first << "\t" << itr.second << std::endl;
        totalWordCount += itr.second;
    }
    std::cout << "Total Words: " << totalWordCount << std::endl;

    return 0;
}
