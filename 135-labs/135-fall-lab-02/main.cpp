/*
Author: Gavin Xiao 
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task B

Ask user to input 2 bounds, a lower and upper bound 
and prints out the numbers from that lower to upper bound 

EDIT: Instead of asking user to input 2 bounds, 2 bounds are hard-coded, 
uses funcs.cpp and funcs.h for the methods and header file. 
Print's out numbers from those two bounds, inclusive first number but exclusive second number. 
*/

#include <iostream>
#include "funcs.h"

int main() { 
    std::cout << "Printing from intervals -5 to 10: inclusive first value, exclusive second value" << std::endl;
    print_interval(-5, 10);

    std::cout << "Printing from intervals -10 to 5: inclusive first value, exclusive second value" << std::endl;
    print_interval(-10, 5);

    std::cout << "Printing from intervals -25 to 25: inclusive first value, exclusive second value" << std::endl;
    print_interval(-25, 25);

    return 0;
}