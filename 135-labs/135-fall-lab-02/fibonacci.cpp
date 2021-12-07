/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 Task D

Use an array to store 60 digits of Fibonacci Numbers, 
number is computed by the number before and 2 digits before that. 

As the number starts to approach 2 billion, the number becomes negative. 
The reason being is that usually in some languages ints can only store 2147483647 in a single int.
*/

#include <iostream>


int main() { 
    // make an array
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    // and all the following ones can be computed iteratively as
    // fib[i] = fib[i-1] + fib[i-2]

    for(int i = 2; i < 60; i++) { 
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < 60; i++) { 
        std::cout << fib[i] << std::endl;
    }

    return 0;
}
