/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: 

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>

int main() {
    double total = 0;
    int count = 0;
    double value; 

    std::cout << "Enter a value: ";
    std::cin >> value;
    
    do { 
        std::cout << "Enter a value, Q to quit: ";
        total += value; 
        count++;
        std::cin >> value; 
    } while(!std::cin.fail());

    std::cout << "average: " << total / count << std::endl;

return 0;
}