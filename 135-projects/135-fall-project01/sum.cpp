/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1A Task A

Taking numbers from a .txt file and adding the numbers up and printing out the sum of the numbers in console

*/

#include <iostream>
using namespace std;

int main() {
    int numbers;
    int sum = 0; 
    while(cin >> numbers) { 
        sum += numbers;
        // cout << numbers << "\n" << sum << endl;
    }

    cout << sum << endl; 

    return 0;
}