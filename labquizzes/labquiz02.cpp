/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: 

Lab Quiz 02 - Greater of X or Y: 
Enter two integers x and y, print out the greater of x and y.
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a interger: ";
    int first_int; 
    std::cin >> first_int;

    std::cout << "Enter another interger: ";
    int second_int; 
    std::cin >> second_int;

    if(first_int > second_int) { 
        std::cout << first_int << std::endl;
    } else if (second_int > first_int) { 
        std::cout << second_int << std::endl;
    } else { 
        std::cout << "Equal." << std::endl;
    }

    return 0;
}