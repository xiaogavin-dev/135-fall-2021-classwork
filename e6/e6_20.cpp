/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 6.20

vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. 
*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b);

int main() {


    return 0;
}

std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result = a; 

    for(int i = 0; i < b.size(); i++) { 
        result.push_back(b.at(i));
    }

    std::sort(result.begin(), result.end());

    return result; 
}