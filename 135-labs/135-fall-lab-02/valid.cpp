/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task A

Ask the user to input a value from 0 < n < 100
If the number is out of range, ask the user to reinput a value. Then square n after value is valid. 
Error in code, code starts to loop if not inputted with a int. 
*/

#include <iostream>
// #include <limits>
#include <string>

int main() {
    std::cout << "Please enter an integer: ";
    int input_integer;
    std::cin >> input_integer; 

    // // verifies if the input is an actual int
    // while(!(std::cin >> input_integer)) { 
    //     std::cout << "Please re-enter an integer: ";
    //     std::cin >> input_integer; 
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    // }
    
    // checks if the inputted value is between the bounds 0 < n < 100 
    
    while(input_integer < 1 || input_integer > 99) { 
        std::cout << "Please re-enter: ";
        std::cin >> input_integer;
    }
     
    std::cout << "Number squared is: " << input_integer * input_integer << std::endl;
}