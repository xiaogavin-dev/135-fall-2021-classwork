/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 4.8

Asks the user to input a word 
and prints out the word letter by letter on a new line for each
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Input a word: ";
    std::string word; 
    std::cin >> word; 

    for(int i = 0; i < word.length(); i++) {
        std::cout << word.at(i) << std::endl;
    }

return 0;
}