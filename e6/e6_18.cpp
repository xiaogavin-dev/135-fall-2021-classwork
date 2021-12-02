/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 6.18

vector<int> append(vector<int> a, vector<int> b)
that appends one vector after another.
*/

#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b);

int main() {


    return 0;
}

std::vector<int> append(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result = a; 

    for(int i = 0; i < b.size(); i++) { 
        result.push_back(b.at(i));
    }

    return result; 
}