#/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 13

Vectors Define function vector<int> makeVector(int n) which, if n is positive, 
return a vector of ints of 0 to n-1, otherwise, return an empty vector.
*/

#include <iostream>
#include <vector>

std::vector<int> makeVector(int n);

int main() {


    return 0;
}


std::vector<int> makeVector(int n) { 
    std::vector<int> vect; 
    if(n > 0) { 
        for(int i = 0; i < n; i++) { 
            vect.push_back(i); 
        }
    }

    return vect; 
}