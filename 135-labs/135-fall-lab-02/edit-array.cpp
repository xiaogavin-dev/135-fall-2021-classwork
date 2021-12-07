/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task C

Creates an array called myData that has 10 values, all are which 1.
Creates a do while loop to change data in the array, until an out of bounds index is inputted
thus the program exits upon out of bounds index. 
*/

#include <iostream> 
#include <array>


int main() { 
    int const SIZE = 10;
    int myData[SIZE];
    int index, value;

    for(int i = 0; i < SIZE; i++) { 
        myData[i] = 1;
    }

    do {
        for(int i = 0; i < SIZE; i++) { 
            std::cout << myData[i] << " ";
        }

        std::cout << "\nInput index: ";
        std::cin >> index; 
        std::cout << "Input value: ";
        std::cin >> value;  

        if(index >= 0 && index < 10) { 
            myData[index] = value;
        }


    } while(index >= 0 && index < 10);
    std::cout << "Index out of range, Exit." << std::endl;

    return 0;
    
}