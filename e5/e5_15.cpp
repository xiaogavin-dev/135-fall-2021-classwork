/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 5.15

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments to arrange them in sorted order. For example,

int v = 3;
int w = 4;
int x = 1;
sort3(v, w, x); // v is now 1, w is now 3, x is now 4
*/

#include <iostream>
#include <string>

void sort2(int& a, int& b) { 
    int temp;
    if(a > b) { 
        temp = a; 
        a = b; 
        b = temp; 
    }
}

void sort3(int& a, int& b, int& c) { 
    for(int i = 0; i < 3; i++) { 

    }
}

int main() {
    int v = 3;
    int w = 4;
    int x = 1;
    sort3(v, w, x); // v is now 1, w is now 3, x is now 4

    std::cout << v << " "
    return 0;
}