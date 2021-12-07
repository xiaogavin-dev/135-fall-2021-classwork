/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 09

Brackets define int unbalanced_brackets(string input), 
return the difference between open curly brackets and closed curly brackets. For example, given "{}}}", return -2.
*/

#include <iostream>
#include <string>

int unbalanced_brackets(std::string input);

int main() {


    return 0;
}

int unbalanced_brackets(std::string input) {
    int open = 0;
    int close = 0; 

    for(int i = 0; i < input.length(); i++) { 
        if(input[i] == '{') {
            open++;
        } else if(input[i] == '}') { 
            close++;
        }
    }

    return open - close; 
}