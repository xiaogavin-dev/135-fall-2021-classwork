/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 06: 

define function `int max3(int a, int b, int c)` 
that returns the maximum of a, b, and c.

*/

#include <iostream>
#include <string>
#include <climits>

int max3(int a, int b, int c);

int main() {
    int num1 = 2;
    int num2 = 4; 
    int num3 = 5;

    std::cout << max3(num1, num2, num3) << std::endl;


    return 0;
}

int max3(int a, int b, int c) { 
    int max = INT_MIN;

    if(a > max) { 
        max = a;
    }

    if(b > max) { 
        max = b;

    }if(c > max) { 
        max = c;
    }

    return max; 
}

