/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 5.14

Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is 
greater than b and otherwise leaves a and b unchanged. For example,

int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u, v); // u is still 2, v is still 3
sort2(w, x); // w is now 1, x is now 4
*/

void sort2(int& a, int& b) { 
    int temp;
    if(a > b) { 
        temp = a; 
        a = b; 
        b = temp; 
    }
}

#include <iostream>
#include <string>

int main() {
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;

    sort2(u, v);
    std::cout << u << " " << v << std::endl;

    sort2(w, x); 
    std::cout << w << " " << x << std::endl;
    
    return 0;
}