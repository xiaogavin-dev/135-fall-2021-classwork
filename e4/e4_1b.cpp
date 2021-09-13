/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 4.1B

The sum of all squares between 1 and 100 (inclusive).
*/

#include <iostream>
#include <string>

int main() {
    int sum = 0;

    for(int i = 1; i <= 100; i++) { 
        sum = i * i; 
    }

    std::cout << sum << std::endl;

return 0;
}