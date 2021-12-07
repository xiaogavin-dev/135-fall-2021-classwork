/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 Task D

Ask the user to input the year and month, 
and print the number of days in that month taking consideration of leap years. 

*/

#include <iostream>
// using namespace std;

int main() {
    /*
    using the code from lab C, first decide if leap year -> boolean for an if statement. 
    1/3/5/7/ = 31 days
    8/10/12 = 31 days 
    4/6/ = 30 days
    9/11 = 30 days
    2 if leap year = 29 else 28

    if(month % 2 doenst equal 0 and month <= 7 || month % 2 equals 0 and month => 8)
        31 days
    else if(month % 2 = 0 and <= 6 || month % 2 != 0 and => 9)
        if leap year and equal to 2
            29 days
        else if(equal to 2)
            28 days
    30 days

        
    */
   int yearInput, monthInput;
   bool isLeapYear; 

    std::cout << "Enter year: ";
    std::cin >> yearInput;
    std::cout << "Enter month: ";
    std::cin >> monthInput;

    if(yearInput % 4 != 0) { 
        isLeapYear = false;
    } else if(yearInput % 100 != 0) {
        isLeapYear = true;
    } else if(yearInput % 400 != 0) { 
        isLeapYear = false;
    } else {
        isLeapYear = true;
    }
// 2018 4 || 4/6/9/11
    if(monthInput % 2 != 0 && monthInput <= 7 || monthInput % 2 == 0 && monthInput >= 8) {
        std::cout << "\n31 days" << std::endl;
    } else if(monthInput % 2 == 0 && monthInput <= 6 || monthInput % 2 != 0 && monthInput >= 9) {
        if(monthInput == 2 && isLeapYear) {
            std::cout << "\n29 days" << std::endl;
        } else if(monthInput == 2 && !isLeapYear) {
            std::cout << "\n28 days" << std::endl;
        } else { 
            std::cout << "\n30 days" << std::endl;
        }
    }

    return 0;
}