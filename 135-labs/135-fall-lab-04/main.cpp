/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 
Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include "shapes.h"

int main() {
    // box(width, height); Task A
    std::cout << "Task A:\n";

    std::cout << "box(3,5):\n";
    std::cout << box(3,5);

    std::cout << "box(7,4):\n";
    std::cout << box(7,4);

    std::cout << "box(6,6):\n";
    std::cout << box(6,6);

    std::cout << "\n------------------\n"; // seperator

    // checkerboard(width, height); Task B
    std::cout << "Task B:\n"; 

    std::cout << "checkerboard(11, 6):\n";
    std::cout << checkerboard(11, 6);

    std::cout << "checkerboard(3, 8):\n";
    std::cout << checkerboard(3, 8);

    std::cout << "checkerboard(5, 5):\n";
    std::cout << checkerboard(5, 5);

    std::cout << "\n------------------\n"; // seperator

    // cross(size); Task C
    std::cout << "Task C:\n";

    std::cout << "cross(5):\n"; 
    std::cout << cross(5); 

    std::cout << "cross(8):\n"; 
    std::cout << cross(8); 

    std::cout << "cross(15):\n"; 
    std::cout << cross(15); 

    std::cout << "\n------------------\n"; // seperator

    // lower(length): Task D
    std::cout << "Task D:\n";

    std::cout << "lower(1):\n"; 
    std::cout << lower(1); 

    std::cout << "lower(4)\n";
    std::cout << lower(4); 

    std::cout << "lower(7)\n"; 
    std::cout << lower(7);

    std::cout << "\n------------------\n"; // seperator

    // upper(length): Task E
    std::cout << "Task E:\n";

    std::cout << "upper(1):\n";
    std::cout << upper(1);

    std::cout << "upper(4):\n";
    std::cout << upper(4);
    
    std::cout << "upper(7):\n";
    std::cout << upper(7);

    std::cout << "\n------------------\n"; // seperator

    // trapezoid(width, height): Task F
    std::cout << "Task F:\n";

    std::cout << "trapezoid(12, 5):\n"; 
    std::cout << trapezoid(12, 5);

    std::cout << "trapezoid(5, 3):\n";
    std::cout << trapezoid(5, 3);

    std::cout << "trapezoid(12, 7):\n";
    std::cout << trapezoid(12, 7);

    std::cout << "\n------------------\n"; // seperator
 
    // checkerboard3x3(width, height): Task G
    std::cout << "Task G:\n";
    std::cout << "checkerboard3x3(4, 4):\n";
    std::cout << checkerboard3x3(4,4);

    std::cout << "checkerboard3x3(6, 8):\n";
    std::cout << checkerboard3x3(6,8);

    std::cout << "checkerboard3x3(27, 27):\n";
    std::cout << checkerboard3x3(27,27);
return 0;
}