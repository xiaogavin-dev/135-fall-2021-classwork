/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 05 - Rectangle: 

Outputs a 5 wide, 6 tall star grid to the console using ‘cout <<’, 
each line looks "* * * * *" (without double quotes)

*/

#include <iostream>
#include <string>

int main() {
    
    for(int i = 0; i < 6; i++) { 
        for(int j = 0; j < 5; j++) { 
            std::cout << "* ";
        }

        std::cout << "\n";
    }

    return 0;
}