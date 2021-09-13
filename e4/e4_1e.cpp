/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: The sum of all odd digits of an input. (For example, if the input is 32677, the sum would be 3 + 7 + 7 = 17.)

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>

int main() {
    int sum = 0;
    
    std::cout << "Insert a number to find the sum of all the odd digits: ";
    std::string number;
    std::cin >> number; 

    for(int i = 0; i < number.length(); i++) {
        if(number.at(i) - '0' % 2 != 0) { 
            sum += number.at(i) - '0';
        }
    }

    std::cout << sum << std::endl;
return 0;
}