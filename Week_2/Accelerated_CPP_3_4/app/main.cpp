/**
 *  @file    main.cpp
 *  @author  Tanuj Thakkar
 *  @date    09/20/2022
 *  @version 1.0
 *
 *  @brief ENPM808X, Week 2, Accelerated C++ - Exercise 3-4
 *
 *  @section DESCRIPTION
 *
 *  This program takes in input from the user and reports the length of the longest and shortest string in the input stream
 *  
 */

// Including headers
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>


int main()
{
    std::cout << "Enter your desired text input, use Ctrl+D to end" << std::endl;

    std::vector<std::string> words;
    std::string word;
    
    while(std::cin >> word) {
        words.push_back(word);
    }

    if(words.size() < 1) {
        std::cout << "Invalid input. Please enter at least one word as text input." << std::endl;
    } else {
        int max = std::numeric_limits<int>::min();
        int max_idx = 0;
        int min = std::numeric_limits<int>::max();
        int min_idx = 0;
        int s = 0;
        int idx = 0;

        for(auto itr: words) {
            s = itr.size();
            if(s > max) {
                max = s;
                max_idx = idx;
            } else if(s < min) {
                min = s;
                min_idx = idx;
            }
            // std::cout << itr.size() << std::endl;

            idx++;
        }

        printf("Lenght of shortest string: %d (%s)\n", int(words[min_idx].size()), words[min_idx].c_str());
        printf("Lenght of longest string: %d (%s)\n", int(words[max_idx].size()), words[max_idx].c_str());
    }

    return 0;
}
