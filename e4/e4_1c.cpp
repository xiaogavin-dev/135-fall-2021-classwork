/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 4.1C

All powers of 2 from 2^0 up to 2^20.
*/

#include <iostream>
#include <string>
#include <cmath>

int main() {
    for(int i = 0; i <= 20; i++) { 
        std::cout << "The power of 2^" << i << " is " <<  pow(2, i) << std::endl;
    }

return 0;
}
