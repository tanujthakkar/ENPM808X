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


void processInputStream(std::istream& in, std::vector<std::string>& words, std::unordered_map<std::string, int>& frequencyCounts) {

    std::string word;
    while (in >> word) {
        words.push_back(word);
        frequencyCounts[word]++;
    }
}


int main()
{   
    std::vector<std::string> words;
    std::unordered_map<std::string, int> frequencyCounts;

    std::cout << "Enter your desired text input, use Ctrl+D to end" << std::endl;
    processInputStream(std::cin, words, frequencyCounts);

    int totalWordCount = 0;
    for (size_t i = 0; i < words.size(); ++i) {
        std::cout << words[i] << "\t" << frequencyCounts[words[i]] << std::endl;
        totalWordCount += frequencyCounts[words[i]];
    }
    std::cout << "Total Words: " << totalWordCount << std::endl;
    
    return 0;
}
