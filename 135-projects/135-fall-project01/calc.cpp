/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A Task B

Simple calculator program that takes data from a .txt file,
computes and prints out the answer

*/

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int number;
    char symbol = '+';
    char old_symbol = '+';
    
    while(cin >> number >> symbol) {
        if(old_symbol == '+') { 
            sum += number;
        } else if(old_symbol == '-') { 
            sum -= number; 
        }
        old_symbol = symbol;
    }

    cin >> number; 
    if(old_symbol == '+') { 
        sum += number;
    } else if(old_symbol == '-') { 
        sum -= number; 
    }
    cout << sum << endl;

    return 0;
}

