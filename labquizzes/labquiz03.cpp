/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz #3

Lab Quiz 03 - Array Manipulation: Initialize an array of numbers 1-10 
Uses ‘cout >>’ to print each number on a separate line
*/

#include <iostream>
#include <string>
#include <array>

int main() {
    int num[10];
    for(int i = 0; i < 10; i++) { 
        num[i] = i + 1;
        std::cout << num[i] << std::endl;
    }

    return 0;
}