/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 3.1

Input an integer and 
outputs whether its negative, zero or positive. 
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a interger: ";
    int input; 
    std::cin >> input; 

    if(input < 0) { 
        std::cout << "Negative" << std::endl;
    } else if(input > 0) { 
        std::cout << "Positive" << std::endl;
    } else { 
        std::cout << "Zero" << std::endl;
    }

return 0;
}
