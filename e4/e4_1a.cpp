/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 4.1A

Write programs with loops that compute
a.The sum of all even numbers between 2 and 100 (inclusive).
*/

#include <iostream>
#include <string>

int main() {
    int sum = 0;

    for(int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    std::cout << sum << std::endl;

return 0;
}