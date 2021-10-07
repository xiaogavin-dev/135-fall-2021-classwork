/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Exercise 6.8
bool equals(int a[], int a_size, int b[], int b_size)
that checks whether two arrays have the same elements in the same order.

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include <array>

bool equals(int a[], int a_size, int b[], int b_size);

int main() {


    return 0;
}

bool equals(int a[], int a_size, int b[], int b_size){ 
    if(a_size != b_size) { 
        return false; 
    } else  { 
        for(int i = 0; i < a_size; i++) { 
            if(a[i] != b[i]) { 
                return false; 
            }
        }
    }

    return true; 
}