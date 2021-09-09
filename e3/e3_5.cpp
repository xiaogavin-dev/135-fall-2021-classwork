/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 3.5

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include <array>

int main() {
    std::cout << "Input 3 intergers: ";
    int nums[3]; 
    for(int i = 0; i < 3; i++) { 
        std::cin >> nums[i];
    }

    if(nums[0] < nums[1] && nums[1] < nums[2]) { // 1 3 5 
        std::cout << "Increasing" << std::endl;
    } else if(nums[0] > nums[1] && nums[1] >> nums[2]) {  // 5 3 1 
        std::cout << "Decreasing" << std::endl;
    } else { 
        std::cout << "Neither" << std::endl;
    }

return 0;
}