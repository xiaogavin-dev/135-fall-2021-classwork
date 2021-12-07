/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 Task C

Ask for an integer input for a calander year,
and according to the modern Gregorian calander it should print leap or common year. 

*/

#include <iostream>
// using namespace std;

int main() {
    /*if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)*/
    int yearInput;

    std::cout << "Enter year: ";
    std::cin >> yearInput;

    if(yearInput % 4 != 0) { 
        std::cout << "\nCommon year" << std::endl;
    } else if(yearInput % 100 != 0) {
        std::cout << "\nLeap year" << std::endl;
    } else if(yearInput % 400 != 0) { 
        std::cout << "\nCommon year" << std::endl;
    } else {
        std::cout << "\nLeap year" << std::endl;
    }

    return 0;
}