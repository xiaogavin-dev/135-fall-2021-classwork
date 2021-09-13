/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: The sum of all odd numbers between a and b (inclusive), where a and b are inputs.

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>

int main() {
    int sum = 0;
    int a, b;

    std::cout << "Input a interger(a): ";
    std::cin >> a;

    std::cout << "Input another interger(b): ";
    std::cin >> b;

    for(int i = a; i <= b; i++) { 
        if(i % 2 != 0) {
            sum += i;
        }
    }

    std::cout << "The sum of all odd intergers between a and b is: " << sum << std::endl;

return 0;
}