/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 08 

Define class Date with public data members year, month, day as int and day_of_week as string. 
Define printDate(Date *input) prints day_of_week, month/day/year. 12/6/2021, Monday, is printed "Monday, 12/6/2021".
*/
#include <iostream>
#include <string> 

class Date {
    public:
        int year;
        int month;
        int day;
        std::string day_of_week;
};


void printDate(Date *input) { 
    std::cout << input->day_of_week << ", " << std::to_string(input->month) << "/" << std::to_string(input->day) 
                << "/" << std::to_string(input->year) << std::endl;
}



int main() {

    return 0;
}
