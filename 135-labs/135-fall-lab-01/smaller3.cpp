/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 Task B

User inputs three numbers, and the program compares 
these numbers to figure out the smallest number. 

*/

#include <iostream>
// using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber; 
    
    // Takes the numbers, user input
    std::cout << "Enter the first number: "; 
    std::cin >> firstNumber; 
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;
    std::cout << "Enter the third number: ";
    std::cin >> thirdNumber;

    // Compares the numbers, firstNumber to secondNumber, then that number to thirdNumber
    if(firstNumber < secondNumber) { 
        if(firstNumber < thirdNumber) { 
            std::cout << "\nThe smaller of the three is: " << firstNumber << std::endl;        
        } else { 
            std::cout << "\nThe smaller of the three is: " << thirdNumber << std::endl;   
        }
    } else if(secondNumber < thirdNumber) { 
        std::cout << "\nThe smaller of the three is: " << secondNumber << std::endl;   
    } else {
        std::cout << "\nThe smaller of the three is: " << thirdNumber << std::endl;   
    }

    return 0;
}