/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A Task C

Calculator program that takes multiple lines of expressions from a .txt file,
understands addition and subtraction, computes and prints out the answer

*/

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int number;
    char symbol;
    char old_symbol = '+';
    
    while(cin >> number >> symbol) { 
        if(old_symbol == '+') {
            sum += number;
        } else if (old_symbol == '-') {
            sum -= number; 
        }
        // Due to the symbols, '+' & '-' being after the numbers, we have to change the old_symbol into symbol to save the sign for next repeat of numbers
        old_symbol = symbol; 

        // Checks for ; or ending of expression & resets code for next expression
        if(symbol == ';') { 
            cout << sum << endl;
            sum = 0; 
            old_symbol = '+';
            symbol = '+';
        }
    }

    return 0;
}

